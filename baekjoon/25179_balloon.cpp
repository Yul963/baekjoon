#include <iostream>
#include <deque>
int main() {
	int n, input;
	std::deque<std::pair<int,int>> dq;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> input;
		dq.push_back(std::make_pair(i, input));
	}

	input = 1;
	while (!dq.empty()) {
		if (input > 0) {
			for (int i = 0; i < input - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
			input = dq.front().second;
			std::cout << dq.front().first << '\n';
			dq.pop_front();
		}
		else {
			for (int i = 0; i < (-input) - 1; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
			input = dq.back().second;
			std::cout << dq.back().first << '\n';
			dq.pop_back();
		}
		
	}
	return 0;
}