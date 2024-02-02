#include <iostream>
#include <set>
#include <string>
/*
����
�� N���� ���ڿ��� �̷���� ���� S�� �־�����.
�Է����� �־����� M���� ���ڿ� �߿��� ���� S�� ���ԵǾ� �ִ� ���� �� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���ڿ��� ���� N�� M (1 �� N �� 10,000, 1 �� M �� 10,000)�� �־�����.
���� N���� �ٿ��� ���� S�� ���ԵǾ� �ִ� ���ڿ����� �־�����.

���� M���� �ٿ��� �˻��ؾ� �ϴ� ���ڿ����� �־�����.
�Է����� �־����� ���ڿ��� ���ĺ� �ҹ��ڷθ� �̷���� ������, ���̴� 500�� ���� �ʴ´�. ���� S�� ���� ���ڿ��� ���� �� �־����� ���� ����.

���
ù° �ٿ� M���� ���ڿ� �߿� �� �� ���� ���� S�� ���ԵǾ� �ִ��� ����Ѵ�.
*/
int main() {
	int n, m, cnt = 0;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n >> m;
	std::set<std::string> strs;

	for (int i = 0; i < n; i++) {
		std::string temp;
		std::cin >> temp;
		strs.insert(std::move(temp));
	}

	std::set<std::string>::iterator it;
	for (int i = 0; i < m; i++) {
		std::string temp;
		std::cin >> temp;
		it = strs.find(temp);
		if (it != strs.end())
			cnt++;
	}
	std::cout << cnt;
	return 0;
}