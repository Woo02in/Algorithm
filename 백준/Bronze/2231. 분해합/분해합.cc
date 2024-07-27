#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int gen, sum;
	for (int i = 1; i < N; i++) {
		gen = i;
		sum = i;
		while (gen) {
			sum += gen % 10;
			gen /= 10;
		}
		if (sum == N) {
			cout << i;
			return 0;
		}
	}
	cout << "0";

	return 0;
}