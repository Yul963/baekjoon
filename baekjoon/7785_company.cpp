#include <iostream>
#include <set>
#include <string>
int main() {
	int n, cnt = 0;
	std::set<std::string> strs;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	std::set<std::string>::iterator it;
	for (int i = 0; i < n; i++) {
		std::string str1, str2;
		std::cin >> str1 >> str2;
		if (str2.compare("enter") == 0)
			strs.insert(str1);
		else if (str2.compare("leave") == 0) {
			it = strs.find(str1);
			if (it != strs.end())
				strs.erase(str1);
		}
	}

	for (auto it2 = strs.rbegin(); it2 != strs.rend(); it2++) {
		std::cout << *it2 << '\n';
	}
	return 0;
}