#include <iostream>
#include <map>
int main() {
	int n, m, temp;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::map<int, int> cards;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		cards[temp]++;
	}
	std::cin >> m;
	for (int i = 0; i < m; i++) {
		std::cin >> temp;
		std::cout << cards[temp] << ' ';
	}
	return 0;
}