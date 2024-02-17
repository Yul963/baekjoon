#include <iostream>
#include <string>
int cnt;

bool palindrome(std::string &str, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (str[l] != str[r]) return 0;
	else return palindrome(str, l + 1, r - 1);
}

int main() {
	int n;
	std::string str;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		cnt = 0;
		std::cin >> str;
		std::cout << palindrome(str, 0, str.length() - 1) << ' ' << cnt << '\n';
	}

	return 0;
}