#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

string s;
int n;
int main() {
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> n >> s;
		for (int j = 0; j < s.size(); j++) {
			for (int k = 0; k < n; k++) {
				cout << s[j];
			}
		}
		cout << endl;
	}

	return 0;
}