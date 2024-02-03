#include <iostream>
#include <map>
#include <string>
#include <vector>
int main() {
	int n, m;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::map<std::string, int> pokemons;
	std::vector<std::string> names;
	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		std::string temp;
		std::cin >> temp;
		names.push_back(temp);
		pokemons.emplace(std::move(temp), i + 1);
	}

	for (int i = 0; i < m; i++) {
		std::string temp;
		std::cin >> temp;
		int num = std::atoi(temp.c_str());
		if (num == 0) {
			int cnt = 0;
			std::cout << (*pokemons.find(temp)).second << '\n';
		}
		else
			std::cout << names[num - 1] << '\n';
	}
	return 0;
}