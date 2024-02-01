#include <iostream>
int main() {
	int n, k, *x;
	std::cin >> n >> k;
	x = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> x[i];
	}
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1; j++)
			if (x[j] < x[j + 1]) {
				int temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}

	std::cout << x[k - 1];
	delete[] x;
	return 0;
}