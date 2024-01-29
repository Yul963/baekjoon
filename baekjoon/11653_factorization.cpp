#include <iostream>
int main() {
	int n;
	std::cin >> n;
	for (int i = 2; n!=1;) {
		if ((n % i) == 0) {
			std::cout << i << '\n';
			n /= i;
		}
		else
			i++;
	}
}