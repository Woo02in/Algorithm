#include<iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int cost = a * b;
	if (cost - c <= 0) {
		cout << '0';
	}
	else {
		cout << cost - c;
	}

	return 0;
}