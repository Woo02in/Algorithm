#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		int test = b;
		while (test > 0) {
			if (a % test == 0 && b%test == 0) {
				break;
			}
			else test--;
		}
		cout << test << endl << (a*b) / test;
	}
	else {
		int test = a;
		while (test > 0) {
			if (b % test == 0 && a % test == 0) {
				break;
			}
			else test--;
		}
		cout << test << endl << (a*b) / test;
	}
	return 0;
}
