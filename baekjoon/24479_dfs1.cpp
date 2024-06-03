#include <iostream>
#include <vector>
#include <set>

int n, m, r, temp1, temp2;
std::vector<std::set<int>> V;
std::vector<int> order;
std::vector<bool> check;

void dfs(int r) {
    temp1++;
    check[r] = true;
    order[r] = temp1;
    auto end = V[r].end();
    for (auto it = V[r].begin(); it != end; it++) {
        r = *it;
        if (!check[r])
            dfs(r);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::cin >> n >> m >> r;
    V.resize(n + 1);
    check.resize(n + 1, false);
    order.resize(n + 1, 0);
    for (int i = 0; i < m; i++) {
        std::cin >> temp1 >> temp2;
        V[temp1].insert(temp2);
        V[temp2].insert(temp1);
    }

    temp1 = 0;
    dfs(r);
    for (int i = 1; i < order.size(); i++)
        std::cout << order[i] << '\n';
    return 0;
}