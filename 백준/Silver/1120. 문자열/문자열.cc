#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string X, Y;
int answer= 987654321;

int main() {

	cin >> X >> Y;
	for (int i = 0; i < Y.length() - X.length() + 1; i++) {
		int cnt = 0;
		for (int j = 0; j < X.length(); j++) {
			if (X[j] != Y[i + j]) {
				cnt++;
			}
		}
		answer = min(answer, cnt);
	}

	cout << answer;

	return 0;
}