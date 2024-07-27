#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main() {
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		string a;
		cin >> a;
		stack<char> sta;
		int len = a.length();
		bool flag = true;
		for (int j = 0; j < len; j++) {
			if (a[j] == '(') {
				sta.push(a[j]);
			}
			else {
				if (sta.empty()) {
					flag = false;
					break;
				}
				else sta.pop();
			}
		}
		if (sta.empty() && flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}