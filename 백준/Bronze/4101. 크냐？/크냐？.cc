#include<iostream>

using namespace std;

int check(int x, int y) {
	return x > y ? 1 : 0;
}
int main() {
	int a, b;	
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		if (check(a, b)) {
			cout << "Yes" << endl;
		}
		else
			cout << "No"<< endl;
	}
	return 0;
}