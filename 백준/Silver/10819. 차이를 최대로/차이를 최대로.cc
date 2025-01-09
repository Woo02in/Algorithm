#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int N, answer;
vector<int> arr;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end());
	do {
		/*for (int i = 0; i < N; i++) {
			cout << arr[i] << " ";
		}*/
		int cnt = 0;
		for (int i = 0; i < N-1; i++) {
			cnt += abs(arr[i] - arr[i + 1]);
		}
		answer = max(answer, cnt);
	} while (next_permutation(arr.begin(), arr.end()));
	cout << answer << '\n';
	return 0;
}