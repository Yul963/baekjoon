#include <iostream>
/*
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
ù° �ٿ� ���� ���� N(1 �� N �� 1, 000)�� �־�����.��° �ٺ��� N���� �ٿ��� ���� �־�����.
�� ���� ������ 1, 000���� �۰ų� ���� �����̴�.���� �ߺ����� �ʴ´�.
���
ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.*/
int main() {
	int n, *num;
	std::cin >> n;
	num = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> num[i];
	
	for (int i = 0; i < n -1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (num[j] > num[j + 1]) {
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		std::cout << num[i] << '\n';
	delete[] num;
	return 0;
}