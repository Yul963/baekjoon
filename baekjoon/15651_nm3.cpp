#include <iostream>
#include <algorithm>

int n, m;
int a[9] = { 0 };

void dfs(int cnt)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            std::cout << a[i] << ' ';
        std::cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        a[cnt] = i;
        dfs(cnt + 1);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::cin >> n >> m;
    dfs(0);

    return 0;
}