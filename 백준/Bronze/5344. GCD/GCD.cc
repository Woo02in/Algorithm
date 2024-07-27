#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int A, B;
		cin >> A >> B;
		cout << gcd(A, B) << endl;
	}

	return 0;
}