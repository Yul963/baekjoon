#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int n, temp;
	std::vector<int> v;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		v.push_back(temp);
	}

	std::sort(v.begin(), v.end());

	std::cout << (*v.begin()) * (*--v.end());

	return 0;
}