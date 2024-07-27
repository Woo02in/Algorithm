#include<iostream>

using namespace std;
int main() {
	int N;
	cin >> N;
	int a = N * 0.78;
	int b = N * 0.8 + (N * 0.2 * 0.78);
	cout << a << " " << b;
	return 0;
}