#include <iostream>
#include <stack>
int main() {
	int n, input, sum = 0;
	std::stack<int> st;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> input;
		if (input == 0)
			st.pop();
		else
			st.push(input);
	}

	n = st.size();
	for (int i = 0; i < n; i++) {
		sum += st.top();
		st.pop();
	}

	std::cout << sum;
	return 0;
}