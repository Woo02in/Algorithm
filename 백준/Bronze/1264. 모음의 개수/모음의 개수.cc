#include<iostream>
#include<string>
using namespace std;

int main() {
	while (true) {
		string s;
		int sum = 0;
		int cnt = 0;
		getline(cin, s);
		if (s == "#") {
			break;
		}
		else
		{
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == 'a' || s[i] == 'U' || s[i] == 'O' || s[i] == 'I' || s[i] == 'E' || s[i] == 'A' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
					sum++;
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}