#include <iostream>

int main() {
	int n;
	int64_t array[1000001];
	std::cin >> n;

	array[0] = 1;
	array[1] = 1;
	for (int i = 2; i <= n; i++) {
		array[i] = (array[i - 1] + array[i - 2])%15746;
	}

	std::cout << array[n];
	return 0;
}