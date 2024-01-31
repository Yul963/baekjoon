#include <iostream>
#include <memory.h>
#include <cmath>
int n;
void make_star(char* star, int d) {
	if (pow(3, d) == n) {
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				star[i * n + j] = '*';
		star[n + 1] = ' ';
		return;
	}
	make_star(star, d + 1);
	make_star(star + n / (int)pow(3, d), d + 1);
	make_star(star + 2 * n / (int)pow(3, d), d + 1);

	make_star(star + n * n / (int)pow(3, d), d + 1);
	make_star(star + (n + 2) * n / (int)pow(3, d), d + 1);

	make_star(star + 2 * n * n / (int)pow(3, d), d + 1);
	make_star(star + (2 * n + 1) * n / (int)pow(3, d), d + 1);
	make_star(star + (2 * n + 2) * n / (int)pow(3, d), d + 1);
}
int main() {
	char* star;
	std::cin >> n;
	star = new char[n * n];
	memset(star, ' ', sizeof(char) * n * n);
	make_star(star, 1);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			std::cout << star[i * n + j];
		std::cout << '\n';
	}

	delete[] star;
	return 0;
}