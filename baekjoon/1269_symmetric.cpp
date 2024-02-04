#include <iostream>
#include <set>

int main() {
	int n, m, cnt = 0;
	std::cin >> n >> m;
	std::set<int> num;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int temp;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		num.insert(temp);
	}

	std::set<int>::iterator it;
	for (int i = 0; i < m; i++) {
		std::cin >> temp;
		it = num.find(temp);
		if (it != num.end())
			cnt++;
	}

	std::cout << n + m - 2 * cnt;
	return 0;
}