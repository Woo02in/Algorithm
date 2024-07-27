#include<iostream>
#include<algorithm>
#include<queue>
#include<utility>
using namespace std;
int N, class_num, start, finish;
priority_queue<int, vector<int>, greater<int>> pq;

vector<pair<int, int>> Class;

int main() {
	cin >> N;
	int answer = 0;
	for (int i = 0; i < N; i++){
		cin >> class_num >> start >> finish;
		Class.push_back({ start,finish });
	}
	sort(Class.begin(), Class.end());

	for (int i = 0; i < N; i++) {
		if (pq.empty()) {
			answer++;
		}
		else {
			if (pq.top() > Class[i].first) {
				answer++;
			}
			else {
				pq.pop();
			}
		}
		pq.push(Class[i].second);
	}
	cout << answer << endl;
	return 0;
}