#include <iostream>
int main() {
	int a = 1, b = 1, x, c = -1;
	std::cin >> x;
	for (int i = 1; i < x; i++) {
		a += c;
		b -= c;
		if (a == 0) {
			a = 1;
			c *= -1;
		}
		else if(b == 0) {
			b = 1;
			c *= -1;
		}
	}
	std::cout << a << '/' << b;
}