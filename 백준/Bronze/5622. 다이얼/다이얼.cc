#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') {
			ans += 3;
		}
		if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') {
			ans += 4;
		}
		if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') {
			ans += 5;
		}
		if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') {
			ans += 6;
		}
		if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') {
			ans += 7;
		}
		if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') {
			ans += 8;
		}
		if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') {
			ans += 9;
		}
		if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') {
			ans += 10;
		}
	}
	cout << ans;
	return 0;
}