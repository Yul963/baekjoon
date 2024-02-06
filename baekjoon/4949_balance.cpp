#include <iostream>
#include <stack>
#include <string>
int main() {
	std::string str;
	std::stack<char> st;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::getline(std::cin, str);
	bool b;
	while (str[0] != '.') {
		b = true;
		for (int i = 0; i < str.size() - 1; i++) {
			if (str[i] == ')') {
				if (!st.empty() && st.top() == '(')
					st.pop();
				else {
					b = false;
					break;
				}
			} else if (str[i] == ']') {
				if (!st.empty() && st.top() == '[')
					st.pop();
				else {
					b = false;
					break;
				}
			} else if (str[i] == '[' || str[i] == '(')
				st.push(str[i]);
		}

		if (st.empty() && b)
			std::cout << "yes" << '\n';
		else
			std::cout << "no" << '\n';

		std::getline(std::cin, str);

		while (!st.empty())
			st.pop();
	}
	return 0;
}