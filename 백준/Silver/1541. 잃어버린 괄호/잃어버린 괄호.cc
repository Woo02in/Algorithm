#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;
string s;
int main() {
	cin >> s;
	int result = 0;
	bool flag = 0;
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
	printf("%d", result);
	return 0;
}

