#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
/*
����
�¶��� ������ ������ ������� ���̿� �̸��� ������ ������� �־�����.
�̶�, ȸ������ ���̰� �����ϴ� ������, ���̰� ������ ���� ������ ����� �տ� ���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �¶��� ���� ȸ���� �� N�� �־�����. (1 �� N �� 100,000)

��° �ٺ��� N���� �ٿ��� �� ȸ���� ���̿� �̸��� �������� ���еǾ� �־�����. 
���̴� 1���� ũ�ų� ������, 200���� �۰ų� ���� �����̰�, �̸��� ���ĺ� ��ҹ��ڷ� �̷���� �ְ�, ���̰� 100���� �۰ų� ���� ���ڿ��̴�. 
�Է��� ������ ������ �־�����.

���
ù° �ٺ��� �� N���� �ٿ� ���� �¶��� ���� ȸ���� ���� ��, ���̰� ������ ������ ������ �� �ٿ� �� �� ���̿� �̸��� �������� ������ ����Ѵ�.
*/
struct User {
	std::string name;
	int age, num;
	User(std::string name, int age, int num) : name(name), age(age), num(num) {};
};

bool compare(struct User a, struct User b) {
	if (a.age == b.age) {
		return a.num < b.num;
	}
	return a.age < b.age;
}

int main() {
	int n;
	std::cin >> n;
	std::vector<struct User> users;
	for (int i = 0; i < n; i++) {
		std::string str;
		int age;
		std::cin >> age >> str;
		users.emplace_back(std::move(str), age, i);
	}
	std::sort(users.begin(), users.end(), compare);

	for (struct User user : users)
		std::cout << user.age<< ' ' << user.name << '\n';

	return 0;
}