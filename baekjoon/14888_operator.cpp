#include <iostream>
#include <vector>
int oper[4], max = -1000000000, min = 1000000000, n;
std::vector<int> numbers;
std::vector<bool> opers;

void operators(int cnt, int result) {
	int current;
	if (cnt == (n-1)) {
		if (result > max)
			max = result;
		if (result < min)
			min = result;
	}

	for (int i = 0; i < (n-1); i++) {
		if (!opers[i]) {
			current = result;
			opers[i] = true;
			if (oper[0] > i)
				current += numbers[cnt + 1];
			else if (oper[1] > i)
				current -= numbers[cnt + 1];
			else if (oper[2] > i)
				current *= numbers[cnt + 1];
			else if (oper[3] > i)
				current /= numbers[cnt + 1];
			operators(cnt + 1, current);
			opers[i] = false;
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	numbers.resize(n);
	opers.resize(n - 1, false);
	for (int i = 0; i < n; i++) {
		std::cin >> numbers[i];
	}
	for (int i = 0; i < 4; i++) {
		std::cin >> oper[i];
		if (i != 0)
			oper[i] += oper[i - 1];
	}

	operators(0, numbers[0]);
	std::cout << max << '\n' << min;

	return 0;
}