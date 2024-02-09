#include <iostream>
#include <queue>
#include <stack>

int main() {
    int n, m, input, x;
    std::stack <int> st;
    std::queue <int> q;
    bool flag[100000];

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> flag[i];

    for (int i = 0; i < n; i++) {
        std::cin >> input;
        if (flag[i] == 0)
            st.push(input);
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    std::cin >> m;
    for (int i = 0; i < m; i++) {
        std::cin >> input;
        q.push(input);
    }

    for (int i = 0; i < m; i++) {
        std::cout << q.front() << " ";
        q.pop();
    }

    return 0;
}