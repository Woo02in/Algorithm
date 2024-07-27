#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	stack<char> sta;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			sta.push(s[i]);
		}
		else {
			sta.pop();
			if (s[i - 1] == '(') {
				ans += sta.size();
			}
			else {
				ans++;
			}
		}
	}
	if (sta.empty()) {
		cout << ans;
	}

	return 0;
}