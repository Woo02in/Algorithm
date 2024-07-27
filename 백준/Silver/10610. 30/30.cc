#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string s;
int main() {
	int sum = 0, cnt = 0;
	cin >> s;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') {
			cnt++;
		}
		sum += s[i];
	}
	if (cnt != 0 && sum % 3 == 0) {
		for (int i = s.size()-1; i >= 0; i--) {
			cout << s[i];
		}
	}
	else {
		cout << -1;
	}
	return 0;
}