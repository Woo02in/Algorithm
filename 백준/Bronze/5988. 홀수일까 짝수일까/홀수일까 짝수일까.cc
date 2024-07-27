#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
string s;

int main() {
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> s;
		int x = s[s.size()-1];
		if (x % 2 == 1) {
			printf("odd\n");
		}
		else printf("even\n");
	}

	return 0;
}