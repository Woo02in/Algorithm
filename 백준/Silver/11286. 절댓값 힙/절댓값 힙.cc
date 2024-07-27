#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
#include<cmath>
#include<utility>
#include<vector>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie();
	int N;
	cin >> N;
	priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int x;
	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x == 0) {
			if (pq.empty()) cout << "0" << endl;
			else {
				cout << pq.top().second << endl;
				pq.pop();
			}
		}
		else {
			pq.push({ abs(x),x });
		}

	}
	return 0;
}