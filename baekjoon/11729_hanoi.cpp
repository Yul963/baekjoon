#include <iostream>
#include <string>
int k = 0;
std::string str;
void hanoi(int n, int s, int d) {
	if (n == 1) {
		k++;
		str += std::to_string((s == 4) ? 3 : s) + ' ' + std::to_string((d == 4) ? 3 : d) + '\n';
		return;
	}
	hanoi(n - 1, s, ~(s | d) & 7);
	k++;
	str += std::to_string((s == 4) ? 3 : s) + ' ' + std::to_string((d == 4) ? 3 : d) + '\n';
	hanoi(n - 1, ~(s | d) & 7, d);
}
int main() {
	int n;
	std::cin >> n;
	hanoi(n, 1, 1<<2);
	std::cout << k << '\n' << str;
	return 0;
}