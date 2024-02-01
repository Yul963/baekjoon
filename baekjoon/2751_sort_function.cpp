#include <iostream>
#include <algorithm>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n, * num;
	std::cin >> n;
	num = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> num[i];
	std::sort(num, num + n);
	for (int i = 0; i < n; i++)
		std::cout << num[i] << '\n';
	delete[] num;
	return 0;
}