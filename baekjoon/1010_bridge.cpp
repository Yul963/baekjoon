#include <iostream>
/* timeout
int bridge(int n, int m) {
	int sum = 0;
	if (n == 1)
		return m;
	if (n == m)
		return 1;
	for (int i = 1; i <= m - n + 1; i++)
		sum += bridge(n - 1, m - i);
	return sum;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int t, n, m;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> n >> m;
		std::cout << bridge(n, m) << '\n';
	}

	return 0;
}*/

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int t, n, m, result, temp;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		result = 1;
		temp = 1;
		std::cin >> n >> m;

		for (int j = m; j > m - n; j--) {
			result = result * j;
			result = result / temp++;
		}

		std::cout << result << '\n';
	}
	return 0;
}