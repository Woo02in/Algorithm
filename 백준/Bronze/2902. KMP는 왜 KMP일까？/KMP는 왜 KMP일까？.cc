#include<iostream>
#include<string>

#include<vector>
using namespace std;

int main() {
	string s;
	vector<char> v;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >=65 && s[i] <=90) {
			v.push_back(s[i]);
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
	return 0;
}