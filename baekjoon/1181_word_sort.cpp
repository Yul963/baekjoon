#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
/*
���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� ���ǿ� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���̰� ª�� �ͺ���
���̰� ������ ���� ������
��, �ߺ��� �ܾ�� �ϳ��� ����� �����ؾ� �Ѵ�.

�Է�
ù° �ٿ� �ܾ��� ���� N�� �־�����. (1 �� N �� 20,000) ��° �ٺ��� N���� �ٿ� ���� ���ĺ� �ҹ��ڷ� �̷���� �ܾ �� �ٿ� �ϳ��� �־�����. 
�־����� ���ڿ��� ���̴� 50�� ���� �ʴ´�.

���
���ǿ� ���� �����Ͽ� �ܾ���� ����Ѵ�.
*/
bool compare(std::string a, std::string b) { 
	if (a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size(); 
}

int main() {
	int n;
	std::cin >> n;
	std::vector<std::string> strs;
	for (int i = 0; i < n; i++) {
		std::string temp;
		std::cin >> temp;
		strs.push_back(std::move(temp));
	}
	std::sort(strs.begin(), strs.end(), compare);
	strs.erase(std::unique(strs.begin(), strs.end()), strs.end());

	for (std::string str : strs)
		std::cout << str << '\n';

	return 0;
}