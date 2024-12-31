#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;

int alpha[27], cnt;
string s;

bool check(string s) {
	int size = s.length();
	for (int i = 0; i < size - 1; i++) {
		if (s[i] == s[i + 1]) return false;
	}
	return true;
}

int main() {
	cin >> s;
	sort(s.begin(), s.end());
	do {
		if (check(s)) cnt++;
	} while (next_permutation(s.begin(), s.end()));
	cout << cnt;
	return 0;
}