#include <iostream>
#include <math.h>
int n, ans = 1000000000, ij[21][21];
bool check[21];

void startlink(int cnt, int next) {
	if (cnt == (n / 2)) {
		int sum1 = 0, sum2 = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <=n; j++) {
				if (check[i] && check[j])
					sum1 += ij[i][j];
				else if(!check[i] && !check[j])
					sum2 += ij[i][j];
			}
		}
		int temp = abs(sum1 - sum2);
		if(ans> temp)
			ans = temp;
		return;
	}

	for (int i = next; i < n; i++) {
		check[i] = true;
		startlink(cnt + 1, i + 1);
		check[i] = false;
	}
}

int main() {
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			std::cin >> ij[i][j];
		}
	}

	startlink(0,1);

	std::cout << ans;
	return 0;
}