#include<iostream>

using namespace std;

int main() {
	int A = 0, B = 0, x;
	for (int i = 3; i >= 1; i--) {
		cin >> x;
		A += i * x;
	}
	for (int i = 3; i >= 1; i--) {
		cin >> x;
		B += i * x;
	}
	if (A > B) {
		cout << 'A' << endl;
	}
	else if (A < B) {
		cout << 'B' << endl;
	}
	else
		cout << 'T' << endl;
	return 0;
}