#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int a, b, c;
		int answer = 0;
		cin >> a >> b >> c;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				for (int k = 1; k <= c; k++) {
					int A = i % j;
					int B = j % k;
					int C = k % i;
					if (A == B && B == C) {
						answer++;
					}

				}
			}
		}
		cout << answer << endl;
	}
	return 0;
}