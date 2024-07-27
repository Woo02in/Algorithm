#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;
int arr[11];
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		arr[i] = int(s[i]) - '0';
	}
	
	for (int i = 1; i < s.size(); i++) {
		int a = 1, b = 1;
		for (int j = 0; j < i; j++) {
			a *= arr[j];
		}
		for (int j = i; j < s.size(); j++) {
			b *= arr[j];
		}
		/*cout << s.size() << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;*/
		if (a == b) {
			cout << "YES" << endl;
			return 0;
		}		
	}
	cout << "NO" << endl;
	return 0;
}