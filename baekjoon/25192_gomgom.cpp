#include <iostream>
#include <set>
#include <string>

int main() {
	int n, cnt = 0;
	std::string str;
	std::set<std::string> set;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> str;
		if (str == "ENTER") {
			cnt += set.size();
			set.clear();
		}
		else {
			set.insert(str);
		}
	}
	cnt += set.size();
	std::cout << cnt;

	return 0;
}