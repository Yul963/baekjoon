#include <iostream>

int main() {
	int n, max = 4, t;
	unsigned long long int array[101] = { 1, 1, 1, 1 };
	std::ios::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);

	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> n;
		for (int j = max; j <= n; j++) {
			array[j] = array[j - 2] + array[j - 3];
		}
		if (n > max)
			max = n;
		std::cout << array[n] << '\n';
	}

	return 0;
}