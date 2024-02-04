#include <iostream>
#include <set>
#include <string>

int main() {
	int n, m;
	std::set<std::string> strs, unheards;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::string temp;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		strs.insert(temp);
	}

	for (int i = 0; i < m; i++) {
		std::cin >> temp;
		auto it = strs.find(temp);
		if (it != strs.end())
			unheards.insert(temp);
	}

	std::cout << unheards.size() << '\n';
	for (auto i : unheards)
		std::cout << i << '\n';

	return 0;
}