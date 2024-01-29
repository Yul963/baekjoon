#include <iostream>
int main() {
	int n;
	while (true) {
		std::cin >> n;
		if (n == -1)
			break;
		int sum = 1;
		for (int i = 2; i <= n / 2;i++) {
			if (n % i == 0)
				sum += i;
		}
		if (sum == n) {
			std::cout << n <<" = 1";
			for (int i = 2; i <= n / 2; i++) {
				if (n % i == 0)
					std::cout << " + " << i;
			}
			std::cout << '\n';
		}
		else
			std::cout << n << " is NOT perfect.\n";
	}
}