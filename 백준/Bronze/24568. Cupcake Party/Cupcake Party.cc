#include<iostream>

using namespace std;

int main() {
	int R, S;
	cin >> R >> S;
	int total = 0;
	total = R * 8 + S * 3;
	cout << total - 28 << endl;

	return 0;
}