#include <iostream>
#include <queue>
#include <string>

int main() {
	int n;
	std::string input;
	std::queue<int> q;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> input;
		switch (input[0])
		{
		case 'p':
			if (input[1] == 'u') {
				int temp;
				std::cin >> temp;
				q.push(temp);
			}
			else {
				if (!q.empty()) {
					std::cout << q.front() << '\n';
					q.pop();
				}
				else
					std::cout << -1 << '\n';
			}
			break;
		case 's':
			std::cout << q.size() << '\n';
			break;
		case 'e':
			std::cout << q.empty() << '\n';
			break;
		case 'f':
			if(!q.empty())
				std::cout << q.front() << '\n';
			else
				std::cout << -1 << '\n';
			break;
		case 'b':
			if (!q.empty())
				std::cout << q.back() << '\n';
			else
				std::cout << -1 << '\n';
			break;
		}
	}
	return 0;
}