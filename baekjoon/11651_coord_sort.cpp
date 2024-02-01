#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int n;
	std::vector<std::pair<int, int>> coords;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		std::cin >> x >> y;
		coords.emplace_back(y, x);
	}
	std::sort(coords.begin(), coords.end());
	for (int i = 0; i < n; i++)
		std::cout << coords[i].second << ' ' << coords[i].first << '\n';
	return 0;
}