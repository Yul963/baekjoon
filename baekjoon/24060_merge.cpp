#include <iostream>
#include <stdlib.h>
int k, cnt;

void merge(int *A, int p, int q, int r) {
    int i = p, j = q + 1, t = 1, temp[500000];
    while (i <= q && j <= r) {
        if (A[i] <= A[j])
            temp[t++] = A[i++];
        else temp[t++] = A[j++];
    }
    while (i <= q)
        temp[t++] = A[i++];
    while (j <= r)
        temp[t++] = A[j++];
    i = p;
    t = 1;
    while (i <= r) {
        A[i++] = temp[t++];
        cnt++;
        if (cnt == k) {
            std::cout << A[i - 1];
            exit(0);
        }
    }
}

void merge_sort(int *A, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2; 
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main() {
	int n, A[500000];
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

    std::cin >> n >> k;
    for (int i = 0; i < n; i++)
        std::cin >> A[i];

    merge_sort(A, 0, n - 1);

    if (cnt < k)
        std::cout << -1;

	return 0;
}