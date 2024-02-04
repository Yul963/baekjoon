#include <iostream>
#include <string>
#include <set>
int main() {
	std::string str;
	std::set<std::string> strs;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> str;
	for (int i = 1; i <= str.length(); i++) {
		for (int j = 0; j + i <= str.length(); j++) {
			strs.insert(str.substr(j, i));
		}
	}
	std::cout << strs.size();
	return 0;
}