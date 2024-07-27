#include<iostream>
using namespace std;

int main() {
	int Test;
	cin >> Test;
	for (int i = 0; i < Test; i++) {
		int C;
		int quarter = 0, dime = 0, nickel = 0, penny = 0;
		cin >> C;
		if (C / 25 > 0) {
			quarter += C / 25;
			C = C % 25;
		}	
		if (C / 10 > 0) {
			dime += C / 10;
			C = C % 10;
		}
		if (C / 5 > 0) {
			nickel += C / 5;
			C = C % 5;
		}
		if (C / 1 > 0) {
			penny += C / 1;
			C = C % 1;
		}
	cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
	}
	return 0;
}