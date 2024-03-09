#include <iostream>
#include <string>
#include <cmath>

std::string str1, str2;
int arr[1000][1000] = { 0 };
bool check[1000][1000] = { false };

int lcs(int i, int j) {
	if (i < 0 || j < 0)
		return 0;

	if(check[i][j])
		return arr[i][j];

	if (str1[i] == str2[j])
		arr[i][j] = lcs(i - 1, j - 1) + 1;
	else
		arr[i][j] = std::max(lcs(i, j - 1), lcs(i - 1, j));

	check[i][j] = true;
	return arr[i][j];
}

int main() {
	std::cin >> str1 >> str2;

	std::cout << lcs(str1.length() - 1, str2.length() - 1);

	return 0;
}