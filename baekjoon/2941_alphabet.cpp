#include <iostream>
#include <string>
int main() {
	std::string c;
	int cnt = 0;
	std::cin >> c;
	for (int i = 0; i < c.length(); i++) {
		cnt++;
		if (i == (c.length() - 1))
			break;
		switch (c[i]) {
		case 'c':
			if ((c[i + 1] == '=') || (c[i + 1] == '-'))
				i++;
			break;
		case 'd':
			if (c[i + 1] == '-')
				i++;
			else if (i < c.length() - 2)
				if ((c[i + 1] == 'z') && (c[i + 2] == '='))
					i+=2;
			break;
		case 'l':
			if (c[i + 1] == 'j')
				i++;
			break;
		case 'n':
			if (c[i + 1] == 'j')
				i++;
			break;
		case 's':
			if (c[i + 1] == '=')
				i++;
			break;
		case 'z':
			if (c[i + 1] == '=')
				i++;
			break;
		default:
			break;
		}
	}
	std::cout << cnt;
}