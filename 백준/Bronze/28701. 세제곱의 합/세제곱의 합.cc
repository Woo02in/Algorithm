#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int N, sum = 0, power = 0, threepower = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		sum += i;
	}
	power = pow(sum, 2);
	

	cout << sum << endl << power << endl << power << endl;
	return 0;
}