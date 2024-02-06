#include <iostream>
#include <stack>
#include <queue>
int main() {
	int n, input;
	std::stack<int> st;
	std::queue<int> q;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> input;
		q.push(input);
	}

	bool check = true;
	for (int i = 1; i <= n;) {
		if (!q.empty() && (q.front() == i)) {
			q.pop();
			i++;
		}
		else if (st.empty()) {
			if (q.empty())
				break;
			else {
				st.push(q.front());
				q.pop();
			}
		}
		else if (st.top() == i) {
			i++;
			st.pop();
		}
		else if (!q.empty() && (st.top() > q.front())) {
			st.push(q.front());
			q.pop();
		}
		else {
			check = false;
			break;
		}
	}

	if (check)
		std::cout << "Nice";
	else
		std::cout << "Sad";

	return 0;
}