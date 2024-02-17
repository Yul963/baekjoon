#include <iostream>
#include <cmath>

void cantor(int d) {
	if (d == 0) {
		std::cout << '-';
		return;
	}
	cantor(d - 1);
	for (int i = 0; i < pow(3, d - 1); i++)
		std::cout << ' ';
	cantor(d - 1);
}

int main() {
	int n;

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	while (std::cin >> n) {
		cantor(n);
		std::cout << '\n';
	}
	
	return 0;
}