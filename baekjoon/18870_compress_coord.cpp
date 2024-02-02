#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int n, *x, *result, *last_index;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::cin >> n;
	x = new int[n];
	result = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> x[i];
		result[i] = x[i];
	}
	std::sort(x, x+n);
	last_index = std::unique(x, x+n);

	for (int i = 0; i < n; i++)
		std::cout << std::lower_bound(x, last_index, result[i]) - x << ' ';

	delete[] x, result;
	return 0;
}