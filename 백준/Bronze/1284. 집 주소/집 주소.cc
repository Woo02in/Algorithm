#include<iostream>
#include<string>
using namespace std;

int main() {
	while (true) {
		string s;
		cin >> s;
		int ans = 0;
		if (s == "0") {
			break;
		}
		else {
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == '1') {
					ans += 2;
				}
				else if (s[i] == '0') {
					ans += 4;
				}
				else {
					ans += 3;
				}
			}
			ans += s.size() + 1;
		}
		cout << ans << endl;
	}

	return 0;
}