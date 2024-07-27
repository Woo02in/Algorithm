#include<iostream>
#include<string>
using namespace std;

int main() {
	while (true) {
		string s;
		cin >> s;
		bool flag = true;
		if (s == "0") {
			break;
		}
		else {
			for (int i = 0; i < s.size() / 2; i++) {
				if (s[i] != s[s.size() - 1 - i]) {
					flag = false;
				}
			}
			if (flag) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
	}
	return 0;
}