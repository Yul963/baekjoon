#include <iostream>
#include <string>
#include <set>

int main() {
	int n;
	std::string str1, str2;
	std::set<std::string> s;

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;

	s.insert("ChongChong");
	for (int i = 0; i < n; i++) {
		std::cin >> str1 >> str2;
		if (s.find(str1) != s.end())
			s.insert(str2);
		else if (s.find(str2) != s.end())
			s.insert(str1);
	}
	std::cout << s.size();
	return 0;
}