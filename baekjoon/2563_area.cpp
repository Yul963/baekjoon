#include <iostream>
#include <memory.h>
/*
����, ������ ũ�Ⱑ ���� 100�� ���簢�� ����� ��� ��ȭ���� �ִ�. �� ��ȭ�� ���� ����, 
������ ũ�Ⱑ ���� 10�� ���簢�� ����� ������ �����̸� �������� ���� ��ȭ���� ���� �����ϵ��� ���δ�. 
�̷��� ������� �����̸� �� �� �Ǵ� ���� �� ���� �� �����̰� ���� ���� ������ ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �������� ���� �־�����. �̾� ��° �ٺ��� �� �ٿ� �ϳ��� �����̸� ���� ��ġ�� �־�����.
�����̸� ���� ��ġ�� �� ���� �ڿ����� �־����µ� ù ��° �ڿ����� �������� ���� ���� ��ȭ���� ���� �� ������ �Ÿ��̰�,
�� ��° �ڿ����� �������� �Ʒ��� ���� ��ȭ���� �Ʒ��� �� ������ �Ÿ��̴�. �������� ���� 100 �����̸�, �����̰� ��ȭ�� ������ ������ ���� ����
*/
int main() {
	int n, paper[10000], x, y, cnt = 0;
	memset(paper, 0, sizeof(int)*10000);
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> x >> y;
		for (int j = 0; j < 10; j++) {
			memset(paper+ (x+j) * 100 + y, 1, sizeof(int) * 10);
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i * 100+j] != 0)
				cnt++;
		}
	}
	std::cout << cnt;
	return 0;
}