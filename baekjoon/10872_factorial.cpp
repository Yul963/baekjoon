#include <iostream>
int main() {
	int n, output = 1;
	std::cin >> n;
	for (int i = n; i > 1; i--)
		output *= i;
	
	std::cout << output;
	return 0;
}