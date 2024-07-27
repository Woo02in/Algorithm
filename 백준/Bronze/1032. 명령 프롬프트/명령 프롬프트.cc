#include<iostream>
#include<string>

using namespace std;
string s;

int main() {
	int N;
	cin >> N;
	cin >> s;
	string new_s = s;

	for (int i = 1; i < N; i++) {
		string res;
		cin >> res;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] != res[j]) {
				new_s[j] = '?';
			}
		}
	}
	cout << new_s << endl;

	return 0;
}