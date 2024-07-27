#include<iostream>

using namespace std;

int max(int a, int b, int c) {
	if (a > b && a > c) {
		if (a >= b + c) {
			return false;
		}
		else return true;
	}
	else if (b > a && b > c) {
		if (b >= a + c) {
			return false;
		}
		else return true;
	}
	else if (c > a && c > b) {
		if (c >= b + a) {
			return false;
		}
		else return true;
	}
}

int main() {
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		else {
			if (!max(a, b, c))
				cout << "Invalid" << endl;
			else {
				if (a == b && b == c) {
					cout << "Equilateral" << endl;
				}
				else if (a == b || b == c || a == c) {
					cout << "Isosceles" << endl;
				}
				else if (a != b && a != c && b != c) {
					cout << "Scalene" << endl;
				}
			}
		}
	}

	return 0;
}