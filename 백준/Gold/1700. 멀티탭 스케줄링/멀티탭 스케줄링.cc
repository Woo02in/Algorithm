#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int N, K, answer;
int multitap[101];
int order[101];


int main() {
	cin >> N >> K;
	for (int i = 0; i < K; i++) {
		cin >> order[i];
	}
		
	for (int i = 0; i < K; i++) {
		bool flag = false;

		for (int j = 0; j < N; j++) {
			if (multitap[j] == order[i]) {
				flag = true;
				break;
			}
		}
		if (flag) continue;

		for (int j = 0; j < N; j++) {
			if (multitap[j] == 0) {
				multitap[j] = order[i];
				flag = true;
				break;
			}
		}
		if (flag) continue;

		int change = -1;
		int idx = -1;
		for (int j = 0; j < N; j++) {
			int tmp = 0;
			for (int k = i + 1; k < K; k++) {
				if (order[k] == multitap[j]) {
					break;
				}
				tmp++;
			}
			if (tmp > change) {
				change = tmp;
				idx = j;
			}
		}
		multitap[idx] = order[i];
		answer++;
	}
	cout << answer << '\n';
	return 0;
}