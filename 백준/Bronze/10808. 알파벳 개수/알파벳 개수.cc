#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	int alpha[26] = { 0, };
	for (int i = 0; i < s.size(); i++) {
		alpha[s[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}


	return 0;
}