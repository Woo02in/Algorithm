#include<iostream>

using namespace std;


int MenOfPassion(int n) {
	int i = n / 2;
	return i;
}

int main() {
	int n, answer = 0;
	cin >> n;
	while (n != 0) {
		n = MenOfPassion(n);
		answer++;
	}
	cout << 1 << endl << 0;
	return 0;
}