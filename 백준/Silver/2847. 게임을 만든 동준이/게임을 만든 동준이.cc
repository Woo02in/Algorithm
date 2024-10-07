#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int N;
int level[101];

int main() {
	cin >> N;
	int answer = 0;
	for (int i = 0; i < N; i++) {
		cin >> level[i];
	}
	for (int i = N-1; i > 0; i--) {
		if (level[i] > level[i - 1]) continue;
		else {
			answer += level[i-1] - (level[i] - 1);
			level[i - 1] = level[i] - 1;
		}
	}
	/*for (int i = 0; i < N; i++) {
		cout << level[i] << " ";
	}*/
	cout << answer << '\n';
	return 0;
}