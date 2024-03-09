#include <iostream>
int mat[21][21][21];
int w(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    else if (a > 20 || b > 20 || c > 20) {
        a = 20; b = 20; c = 20;
    }

    if (mat[a][b][c])
        return mat[a][b][c];
    else {
        if (a < b && b < c)
            mat[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        else
            mat[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
        return mat[a][b][c];
    }
}

int main() {
    int a, b, c;
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::cin >> a >> b >> c;

    while (a != -1 || b != -1 || c != -1) {
        std::cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
        std::cin >> a >> b >> c;
    }
    return 0;
}