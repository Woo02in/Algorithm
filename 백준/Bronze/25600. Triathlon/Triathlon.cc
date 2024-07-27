#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N, a, d, g, max_score = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int score = 0;
		cin >> a >> d >> g;
		if (a == d + g) {
			score = a * (d + g) * 2;
			max_score = max(max_score, score);
		}
		else {
			score = a * (d + g);
			max_score = max(max_score, score);
		}

	}
	cout << max_score << endl;
	return 0;
}