#include <iostream>
int main() {
	int n, k, a = 1, b = 1, c = 1;
	std::cin >> n >> k;

	for (int i = 2; i <= n; i++)
		a *= i;

	for (int i = 2; i <= k; i++)
		b *= i;

	for (int i = 2; i <= (n - k); i++)
		c *= i;

	std::cout << a / (b * c);

	return 0;
}