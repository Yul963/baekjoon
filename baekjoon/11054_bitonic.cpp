#include <iostream>

int main() {
	int n, a[1000][3] = {0}, max = 0;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i][0];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i][0] > a[j][0] && a[i][1] < a[j][1] + 1)
				a[i][1] = a[j][1] + 1;
		}
	}

	for (int i = n - 1; i > -1; i--) {
		for (int j = n - 1; j > i; j--) {
			if (a[i][0] > a[j][0] && a[i][2] < a[j][2] + 1)
				a[i][2] = a[j][2] + 1;
		}
	}

	for (int i = 0; i < n; i++) {
		if (max < a[i][1] + a[i][2])
			max = a[i][1] + a[i][2];
	}

	std::cout << max + 1;

	return 0;
}