#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include <string>
using namespace std;
string s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	int answer = 0, position = 0;
	while (answer++ < 30000) {
		string num = to_string(answer);
		for (int i = 0; i < num.length(); i++) {
			if (s[position] == num[i]) {
				position++;
			}
			if (position == s.length()) {
				cout << answer;
				return 0;
			}
		}
	}
	return 0;
}