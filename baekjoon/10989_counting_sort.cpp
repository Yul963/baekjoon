#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	std::cin >> n;
	int input[10001] = {0};

	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		input[temp] += 1;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < input[i]; j++) {
			std::cout << i << '\n';
		}
	}

	return 0;
}