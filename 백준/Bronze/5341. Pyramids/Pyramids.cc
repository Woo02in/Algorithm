#include<iostream>
using namespace std;
int main() {
	int N;
	while (true) {
		cin >> N;
		int answer = 0;
		if (N == 0)
			break;
		for (int i = 1; i <= N; i++) {
			answer += i;
		}
		cout << answer << endl;
	}

	return 0;
}