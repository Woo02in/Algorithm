#include<iostream>

using namespace std;

int main() {
	int n, k, a, b;
	cin >> n >> k >> a >> b;
	cout << (n - 1) * b + (k - 1) * b << " "<<(n - 1) * a;

	return 0;
}