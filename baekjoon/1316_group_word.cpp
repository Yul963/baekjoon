#include <iostream>
#include <string>
#include <memory.h>
/*
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.
���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������,
aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�. 
��° �ٺ��� N���� �ٿ� �ܾ ���´�. �ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.
*/
int main() {
	std::string word;
	int n, check[27], cnt;
	std::cin >> n;
	cnt = n;
	for (int i = 0; i < n; i++) {
		memset(check, 0, sizeof(int) * 27);
		std::cin >> word;
		char c = word[0];
		check[word[0] - 97] = 1;
		for (int j = 1; j < word.length(); j++) {
			if ((word[j - 1] != word[j]) && (check[word[j] - 97] == 1)) {
				--cnt;
				break;
			}	
			else
				check[word[j] - 97] = 1;
		}
	}
	std::cout << cnt;
}