#include <iostream>
#include <string>
/*
�迭�� �����ϴ� ���� ����. ���� �־�����, �� ���� �� �ڸ����� ������������ �����غ���.

�Է�
ù° �ٿ� �����Ϸ��� �ϴ� �� N�� �־�����. N�� 1,000,000,000���� �۰ų� ���� �ڿ����̴�.

���
ù° �ٿ� �ڸ����� ������������ ������ ���� ����Ѵ�.
*/
int main() {
	std::string str;
	std::cin >> str;

	for (int i = 0; i < str.length() - 1; i++) {
		for (int i = 0; i < str.length() - 1; i++) {
			if (str[i] < str[i + 1]) {
				int temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
			}
		}
	}

	std::cout << str;
	return 0;
}