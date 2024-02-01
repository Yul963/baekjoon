#include <iostream>
#include <algorithm>
#include <vector>
/*
2���� ��� ���� �� N���� �־�����. ��ǥ�� x��ǥ�� �����ϴ� ������,
x��ǥ�� ������ y��ǥ�� �����ϴ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� ���� N (1 �� N �� 100,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� i������ ��ġ xi�� yi�� �־�����. 
(-100,000 �� xi, yi �� 100,000) ��ǥ�� �׻� �����̰�, ��ġ�� ���� �� ���� ����.

���
ù° �ٺ��� N���� �ٿ� ���� ������ ����� ����Ѵ�.
*/
int main() {
	int n;
	std::vector<std::pair<int, int>> coords;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		std::cin >> x >> y;
		coords.emplace_back(x, y);
	}
	std::sort(coords.begin(), coords.end());
	for (int i = 0; i < n; i++)
		std::cout << coords[i].first << ' ' << coords[i].second << '\n';
	return 0;
}