#include <iostream>
#include <vector>
#include <memory.h>
int main() {
	int n, k, max = 0;
	std::cin >> n >> k;
	int* dp = new int[(n+1) * (k+1)];
	memset(dp, 0, sizeof(int) * (n + 1) * (k + 1));
	std::vector<std::pair<int, int>> items;
	for (int i = 0; i < n; i++) {
		int w, v;
		std::cin >> w >> v;
		items.emplace_back(w, v);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (items[i - 1].first <= j)
				dp[i * (k + 1) + j] = std::max(items[i - 1].second + dp[(i - 1) * (k + 1) + j - items[i - 1].first], dp[(i - 1) * (k + 1) + j]);
			else
				dp[i * (k + 1) + j] = dp[(i - 1) * (k + 1) + j];
			max = std::max(max, dp[i * (k + 1) + j]);
		}
	}
	std::cout << max;
	delete[] dp;
	return 0;
}