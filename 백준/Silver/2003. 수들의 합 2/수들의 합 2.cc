
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N, M, start = 0, end = 0;
	int answer = 0, sum;
	cin >> N >> M;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sum = 0;
	while (true) {
		if (sum > M) {
			sum -= v[start];
			start++;
		}
		else if (end == N) {
			break;
		}
		else {
			sum += v[end];
			end++;
		}
		if (sum == M) {
			answer++;
		}
	}

	printf("%d", answer);

	return 0;
}