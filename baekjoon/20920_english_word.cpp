#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

bool cmp(const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
	if (a.second == b.second) {
		if (a.first.length() == b.first.length())
			return a.first < b.first;
		return a.first.length() > b.first.length();
	}
	return a.second > b.second;
}

int main() {
	int n, m;
	std::string str;
	std::map<std::string, int> map;

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		std::cin >> str;
		if(m <= str.length())
			map[str]++;
	}
	std::vector<std::pair<std::string, int>> v(map.begin(), map.end());

	std::sort(v.begin(), v.end(), cmp);
	
	for (std::pair<std::string, int> i : v)
		std::cout << i.first << '\n';

	return 0;
}