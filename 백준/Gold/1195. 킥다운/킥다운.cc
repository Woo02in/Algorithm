#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;
string a, b;
char gear1[201];
char gear2[201];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> a >> b;
	int answer = a.length() + b.length();
	if (a.length() > b.length()) {
		swap(a, b);
	}
	bool flag = false;
	for (int i = 0; i < a.length(); i++) {
		flag = false;
		for (int j = 0; j <= i; j++) {
			if (b[j] == '2' && a[a.length() - 1 - i + j] == '2') {
				flag = true;
				break;
			}
		}
		if (!flag) {
			answer = min(answer, (int)a.length() + (int)b.length() - i - 1);
		}
	}

	for (int i = 0; i < a.length(); i++) {
		flag = false;
		for (int j = 0; j <= i; j++) {
			if (b[b.length() - 1 - i + j] == '2' && a[j] == '2') {
				flag = true;
				break;
			}
		}
		if (!flag) {
			answer = min(answer, (int)a.length() + (int)b.length() - 1 - i);
		}
	}

	for (int i = 0; i < b.length() - a.length(); i++) {
		flag = false;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] == '2' && b[i + j] == '2') {
				flag = true;
				break;
			}
		}
		if (!flag) {
			answer = min(answer, (int)b.length());
		}
	}
	cout << answer << '\n';

	return 0;
}