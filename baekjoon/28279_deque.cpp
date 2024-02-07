#include <iostream>
#include <deque>

int main() {
	int n, input;
	std::deque<int> dq;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> input;
		switch (input) {
		case 1:
			std::cin >> input;
			dq.push_front(input);
			break;
		case 2:
			std::cin >> input;
			dq.push_back(input);
			break;
		case 3:
			if (!dq.empty()) {
				std::cout << dq.front() << '\n';
				dq.pop_front();
			}
			else
				std::cout << -1 << '\n';
			break;
		case 4:
			if (!dq.empty()) {
				std::cout << dq.back() << '\n';
				dq.pop_back();
			}
			else
				std::cout << -1 << '\n';
			break;
		case 5:
			std::cout << dq.size() << '\n';
			break;
		case 6:
			std::cout << dq.empty() << '\n';
			break;
		case 7:
			if (!dq.empty())
				std::cout << dq.front() << '\n';
			else
				std::cout << -1 << '\n';
			break;
		case 8:
			if (!dq.empty())
				std::cout << dq.back() << '\n';
			else
				std::cout << -1 << '\n';
			break;
		}
	}
	return 0;
}