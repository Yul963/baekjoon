#include <iostream>
int cnt1 = 0, cnt2 = 0, n, *f;

int fib(int n) {
    if (n == 1 || n == 2) {
        cnt1++;
        return 1;
    }
    else
        return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++) {
        cnt2++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main() {
    std::cin >> n;
    f = new int[n + 1];

    fib(n);
    fibonacci(n);

    std::cout << cnt1 << ' ' << cnt2;//std::cout << fibonacci(n) << ' ' << n-2;
    delete[] f;

    return 0;
}