#include<iostream>

using namespace std;

int main() {
	int total, n, sum = 0;
	cin >> total;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		sum += a * b;
	}
	if (sum == total) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}