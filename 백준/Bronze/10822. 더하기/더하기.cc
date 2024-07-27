#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string s;
	string s_1;
	int sum = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ',') {
			sum += stoi(s_1);
			s_1 = "";
		}
		else {
			s_1 += s[i];
		}
	}
	cout << sum + stoi(s_1);
	return 0;
}