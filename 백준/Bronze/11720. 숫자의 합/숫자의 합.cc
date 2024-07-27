#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
string s;

int main() {
	int t;
	int sum = 0;
	char num[100] = { 0, };
	cin >> t;
	cin >> num;
	
	for (int i = 0; i < t; i++) {
		sum += num[i] -'0';
	}

	cout << sum;

	return 0;
}