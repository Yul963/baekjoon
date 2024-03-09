#include <iostream>

int main() {
	int n, input, max, sum;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	std::cin >> input;
	sum = input;
	max = input;
	for (int i = 1; i < n; i++) {
		std::cin >> input;
		if (input > (input + sum))
			sum = input;
		else
			sum += input;
		if (sum > max)
			max = sum;
	}

	std::cout << max;

	return 0;
}