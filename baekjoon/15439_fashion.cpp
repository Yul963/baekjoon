#include <iostream>
int main() {
	int n;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	std::cout << n * (n - 1);

	return 0;
}