#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	
	while (true) {
		string s;
		getline(cin, s);
		if (s == "END")
			break;
		else {
			reverse(s.begin(), s.end());
			cout << s << endl;
		}
	}

	return 0;
}
