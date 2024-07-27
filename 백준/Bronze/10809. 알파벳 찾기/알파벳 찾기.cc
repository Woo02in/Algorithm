#include<iostream>
#include<string>
using namespace std;

int cnt[26] = { 0, };
int main() {
	string s;
	cin >> s;
	for (int q = 'a'; q <= 'z'; q++) {
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == q) {
				cnt[q - 97] = j + 1;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << cnt[i] - 1 << " ";
	}

	return 0;
}