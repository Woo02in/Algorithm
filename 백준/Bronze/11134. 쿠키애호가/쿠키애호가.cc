#include<iostream>

using namespace std;

int main() {
	int T,N,C;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> C;
		if (N % C == 0) {
			cout << N / C << endl;
		}
		else
			cout << N / C + 1 << endl;
	}

	return 0;
}