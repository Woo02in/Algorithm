#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s;
	bool flag = true;
	cin >> s;
	int size = s.size();
	//if (size / 2 == 1) {
	for (int i = 0; i < size / 2; i++) {
		if (s[i] != s[size - 1 - i]) {
			flag = 0;
			break;
		}
	}
	if (flag) {
		cout << "1";
	}
	else {
		cout << "0";
	}
	//}
	/*else {
		for (int i = 0; i < size / 2 - 1; i++) {
			if (s[i] != s[size - 1 - i]) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			cout << "1";
		}
		else {
			cout << "0";
		}
	}*/

	return 0;
}