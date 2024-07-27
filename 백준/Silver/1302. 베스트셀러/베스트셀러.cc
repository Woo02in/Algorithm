#include<iostream>
#include<map>
#include<string>
#include<algorithm>


using namespace std;

int main() {
	map<string, int> m;
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string title;
		cin >> title;
		m[title]++;
	}
	for (auto p : m) {
		cnt = max(cnt, p.second);
	}
	for (auto p : m) {
		if (p.second == cnt) {
			cout << p.first;
			return 0;
		}
	}
}