#include <iostream>
#include <stack>
int main() {
	int n;
	char ch;
	std::stack<char> st;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	std::cin.ignore();
	for (int i = 0; i < n; i++) {
		ch = 0;
		ch = std::cin.get();
		while (ch != '\n') {
			if (!st.empty() && (st.top() == '(' && ch == ')'))
				st.pop();
			else
				st.push(ch);
			ch = std::cin.get();
		}
		if (st.empty())
			std::cout << "YES" << '\n';
		else
			std::cout << "NO" << '\n';

		while (!st.empty())
			st.pop();
	}
	return 0;
}