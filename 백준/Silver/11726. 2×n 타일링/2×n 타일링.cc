#include<iostream>
using namespace std;
int squ[1001];

int main() {
	int N;
	cin >> N;
	squ[0] = 1;
	squ[1] = 1;
	for (int i = 2; i <= N; i++) {
		squ[i] = (squ[i - 2] + squ[i - 1]) %10007;
	}
	cout << squ[N] % 10007;
	return 0;
}