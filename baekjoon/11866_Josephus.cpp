#include <iostream>
#include <queue>
int main() {
	int n, k;
	std::queue<int> q;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n >> k;
	for (int i = 1; i <= n; i++)
		q.push(i);

	std::cout << '<';
	while (q.size() != 1) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		std::cout << q.front() << ", ";
		q.pop();
	}
	std::cout << q.front() << '>';
	return 0;
}