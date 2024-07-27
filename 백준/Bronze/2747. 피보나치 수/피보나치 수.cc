#include<iostream>
#include<math.h>

using namespace std;

long long fibo[46];
int main() {
	int n;
	cin >> n;
	fibo[1] = 1;
	fibo[2] = 1;
	for (int i = 3; i <= n; i++) {
		fibo[i] = (fibo[i - 2] + fibo[i - 1]);
	}
	cout << fibo[n];


	return 0;
}