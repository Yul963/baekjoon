#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

bool cmp(const std::pair<int, int>& a, const std::pair<int,int> &b) {
	if (a.second == b.second) return a.first > b.first;
	return a.second < b.second;
}

int main() {
	int n, temp;

	std::vector<int> v;
	std::map<int, int> m;

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n;
	
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		v.push_back(temp);
		m[temp]++;
	}

	std::sort(v.begin(), v.end());

	temp = 0;
	for (int i = 0; i < n; i++)
		temp += v[i];

	std::cout << (int)std::round((double)temp / (double)n) <<'\n' << v[n/2] << '\n';

	std::vector<std::pair<int, int>> mv(m.begin(), m.end());
	std::sort(mv.begin(), mv.end(), cmp);

	if ( mv.size() > 1 && ((*(mv.end() - 1)).second == (*(mv.end() - 2)).second))
		temp = (*(mv.end() - 2)).first;
	else temp = (*(mv.end() - 1)).first;

	std::cout << temp << '\n' << v[n-1] - v[0] ;

	return 0;
}