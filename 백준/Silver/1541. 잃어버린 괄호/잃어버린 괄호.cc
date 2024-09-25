#include<iostream>
#include<string>

using namespace std;
string s;
int result = 0;
bool flag;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> s;
	
	string tmp = "";
	for (int i = 0; i <= s.size(); i++) {
		if (s[i] == '+' || s[i] == '-' || s[i] == '\0') {
			if (flag) {
				result -= stoi(tmp);
			}
			else {
				result += stoi(tmp);
			}
			tmp = "";
			if (s[i] == '-') flag = 1;
			continue;
		}
		tmp += s[i];
	}
	cout << result << '\n';
	return 0;
}

