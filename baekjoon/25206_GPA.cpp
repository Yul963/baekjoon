#include <iostream>
#include <string>
int main() {
	double cnt, gp, cnt_sum = .0, gp_sum = .0;
	std::string str;
	for (int i = 0; i < 20; i++) {
		std::cin >> str >> cnt >> str;
		switch (str[0]) {
		case 'A':
			if (str[1] == '0')
				gp = 4.0;
			else
				gp = 4.5;
			break;
		case 'B':
			if (str[1] == '0')
				gp = 3.0;
			else
				gp = 3.5;
			break;
		case 'C':
			if (str[1] == '0')
				gp = 2.0;
			else
				gp = 2.5;
			break;
		case 'D':
			if(str[1]=='0')
				gp = 1.0;
			else
				gp = 1.5;
			break;
		case 'F':
			gp = .0;
			break;
		case 'P':
			continue;
			break;
		default:
			gp = .0;
			break;
		}
		cnt_sum += cnt;
		gp_sum += gp * cnt;
	}
	std::cout << gp_sum / cnt_sum;
}