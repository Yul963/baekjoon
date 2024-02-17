#include <iostream>

int fibonacci(int n) {
	int temp;
	if (n == 0 || n == 1)
		return n;
	temp = fibonacci(n - 2) + fibonacci(n - 1);
	return temp;
}

int main() {
	int n;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;

	std::cout << fibonacci(n);

	return 0;
}