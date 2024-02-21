#include <iostream>
#include <vector>
#include <stdlib.h>

int board[9][9];
std::vector<std::pair<int ,int>> coords;

bool check(int x, int y, int n) {
	int a = x / 3, b = y / 3;
	for (int i = 0; i < 9; i++) {
		if (board[x][i] == n)
			return false;
	}
	for (int i = 0; i < 9; i++) {
		if (board[i][y] == n)
			return false;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[3 * a + i][3 * b + j] == n)
				return false;
		}
	}
	return true;
}

void sudoku(int cnt) {
	if (cnt == coords.size()) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++)
				std::cout << board[i][j] << ' ';
			std::cout << '\n';
		}
		exit(0);
	}

	if (board[coords[cnt].first][coords[cnt].second] == 0) {
		for (int j = 1; j <= 9; j++) {
			if (check(coords[cnt].first, coords[cnt].second, j)) {
				board[coords[cnt].first][coords[cnt].second] = j;
				sudoku(cnt + 1);
				board[coords[cnt].first][coords[cnt].second] = 0;
			}
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cin >> board[i][j];
			if (board[i][j] == 0) {
				coords.emplace_back(i, j);
			}
		}
	}
	sudoku(0);
	return 0;
}