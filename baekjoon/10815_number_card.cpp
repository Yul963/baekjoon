#include <iostream>
#include <set>
int main() {
	int n;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::set<int> cards;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		cards.insert(temp);
	}

	std::cin >> n;
	std::set<int>::iterator it;
	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		it = cards.find(temp);
		if(it != cards.end())
			std::cout<< 1 <<' ';
		else
			std::cout << 0 << ' ';
	}

	return 0;
}