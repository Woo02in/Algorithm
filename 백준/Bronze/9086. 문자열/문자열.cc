#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string text;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> text;
		int end = text.size();
		cout << text[0] << text[end - 1] << endl;

	}
	return 0;
}



