#include<iostream>
#include<algorithm>

using namespace std;
int N, K, answer;
int cat[5001];

int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> cat[i];
	}
	sort(cat, cat + N);
	int left = 0;
	int right = N - 1;

	while (left < right) {
		if (cat[left] + cat[right] <= K) {
			answer++;
			left++;
			right--;
		}
		else {
			right--;
		}
	}
	cout << answer << '\n';
	return 0;
}