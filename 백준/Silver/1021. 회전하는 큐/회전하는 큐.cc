#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	deque<int> dq;
	int N, M;
	int cnt = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}
	int input, index;
	for (int i = 0; i < M; i++) {
		cin >> input;
		index = 1;
		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == input) {
				break;
			}
			index++;
		}
		int left = index - 1;
		int right = dq.size() - index + 1;
		
		if (left < right) {
			for (int i = 0; i < left; i++) {
				int x = dq.front();
				dq.pop_front();
				dq.push_back(x);
				cnt++;
			}
			dq.pop_front();
		}
		else {
			for (int i = 0; i < right; i++) {
				int x = dq.back();
				dq.pop_back();
				dq.push_front(x);
				cnt++;
			}
			dq.pop_front();
		}
	}
	cout << cnt;
	return 0;
}