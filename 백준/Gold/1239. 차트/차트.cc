#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> v;
int answer;

int calc(vector<int> v) {
	int len = v.size();
	int cnt = 0;
	for (int st = 0; st < len; st++) {
		int sum = 0;
		int tmp_idx = st;
		while (sum < 50) {
			sum += v[tmp_idx];
			tmp_idx = (tmp_idx + 1) % len;
		}
		if (sum == 50)
			cnt += 1;
	}
	return cnt;

}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (x > 50) {
			answer = 0;
			cout << answer << endl;
			return 0;
		}
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	do {
		answer = max(answer, calc(v));
	} while (next_permutation(v.begin(), v.end()));
	cout << answer/2 << endl;
	return 0;
}