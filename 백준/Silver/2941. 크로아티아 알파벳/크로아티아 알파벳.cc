#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == NULL) {
			break;
		}
		if (s[i] == 'c' || s[i] == 's' || s[i] == 'z') {
			if (s[i + 1] == '=' || s[i + 1] == '-') {
				
				continue;
			}
		}
		if (s[i] == 'l' || s[i] == 'n') {
			if (s[i + 1] == 'j') {
				
				continue;
			}
		}
		if (s[i] == 'd') {
			if (s[i + 1] == '-') {
				
				continue;
			}
			else if (s[i + 1] == 'z' && s[i + 2] == '=') {
				
				continue;
			}
		}
		ans++;
	}
		
	cout << ans << endl;
	return 0;
}