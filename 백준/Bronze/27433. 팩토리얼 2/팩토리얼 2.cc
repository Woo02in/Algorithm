#include<iostream>

using namespace std;

long long factorial(long long a) {
	if (a == 1) {
		return 1;
	}
	else {
		return a * factorial(a - 1);
	}
}

int main() {
	long long N;
	cin >> N;
	if (N == 0) {
		cout << 1;
	}
	else
	{
		cout << factorial(N) << endl;
	}
	

	return 0;
}