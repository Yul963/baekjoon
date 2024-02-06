#include <iostream>
#include <stack>
int main() {
	int n, input;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::stack<int> st;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> input;
		switch (input) {
		case 1:
			std::cin >> input;
			st.push(input);
			break;
		case 2:
			if (st.empty())
				std::cout << -1 << '\n';
			else {
				std::cout << st.top() << '\n';
				st.pop();
			}
			break;
		case 3:
			std::cout << st.size() << '\n';
			break;
		case 4:
			std::cout << st.empty() << '\n';
			break;
		case 5:
			if (st.empty())
				std::cout << -1 << '\n';
			else
				std::cout << st.top() << '\n';
			break;
		}
	}
	return 0;
}