#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main() {
	string s;
	bool flag = true;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'I' || s[i] == 'O' || s[i] == 'S' || s[i] == 'H' || s[i] == 'Z' || s[i] == 'X' || s[i] == 'N') {
			continue;
		}
		else {
			flag = false;
			break;
		}
	}
	if (flag) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}