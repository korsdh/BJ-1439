#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt_0 = 0;
	int cnt_1 = 0;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == '0' && s[i + 1] == '1') {
			cnt_0++;
		}
		else if (s[i] == '1' && s[i + 1] == '0') {
			cnt_1++;
		}
	}
	if (s[s.length() - 1] == '0') cnt_0++;
	else cnt_1++;
	cout << min(cnt_0, cnt_1);
	return 0;
}