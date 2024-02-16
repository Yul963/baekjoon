#include <iostream>

long long int factorial(int n) {
	if (n <= 1)
		return 1;
	long long int a;
	a = factorial(n - 1);
	return a * n;
}

int main() {
	int n;

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	std::cout << factorial(n);

	return 0;
}