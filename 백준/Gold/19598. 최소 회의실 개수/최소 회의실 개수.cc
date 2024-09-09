#include<iostream>
#include<algorithm>
#include<queue>
#include<utility>
#include<vector>

using namespace std;
int N;
priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
priority_queue<int, vector<int>, greater<int>> lasttime;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int start, end;
		cin >> start >> end;
		pq.push({ start, end });
	}
	int answer = 1;
	int curs = pq.top().first, cure = pq.top().second;
	lasttime.push(cure);
	pq.pop();

	while (!pq.empty()) {
		if (pq.top().first >= lasttime.top()) {
			lasttime.push(pq.top().second);
			lasttime.pop();
		}
		else {
			answer++;
			lasttime.push(pq.top().second);
						
		}	
		
		pq.pop();
	}

	cout << answer << endl;
	return 0;
}