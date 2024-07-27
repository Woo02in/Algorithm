#include<iostream>
#include<algorithm>
using namespace std;
int budget[100001];
int main() {
	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> budget[i];
	}
    sort(budget,budget+N);
	cin >> M;
	int left = 0, right = budget[N-1], mid;
	while (left <= right) {
		mid = (left + right) / 2;
		int sum = 0;
		for (int i = 0; i < N; i++) {
			if (budget[i] >  mid)
				sum += mid;
			else
				sum += budget[i];
		}

		if (sum > M) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	cout << right;

	return 0;
}
