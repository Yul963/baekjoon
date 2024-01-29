#include <iostream>
#include <string>
int main(){
	std::string str;
	int n = 0;
	std::getline(std::cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != ' ') {
			n++;
			while (str[i] != ' ') {
				i++;
				if (i == str.length())
					break;
			}
		}
	}
	std::cout << n;
}