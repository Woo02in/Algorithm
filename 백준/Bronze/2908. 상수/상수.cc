#include<iostream>
#include<string>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int n = a[0];
	a[0] = a[2];
	a[2] = n;

	int N = b[0];
	b[0] = b[2];
	b[2] = N;

	int num_a = stoi(a);
	int num_b = stoi(b);

	if (num_a > num_b) {
		cout << num_a;
	}
	else {
		cout << num_b;
	}
	return 0;
}