#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<queue>
using namespace std;
int N;

vector<pair<int,int>> v;
int vis[200001];
priority_queue<int, vector<int>, greater<int>> pq;

//void check(int a, int start) {
//	while (!q.empty()) {
//		vis[start] = 1;		
//		for (int i = start+1; i < N; i++) {			
//			if (!vis[i] && v[i].first >= a) {
//				vis[i] = 1;
//				a = v[i].second;
//				q.push(v[i].second);
//				q.pop();
//			}			
//		}
//		q.pop();
//	}
//}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	int answer = 0;
	for (int i = 0; i < N; i++) {
		int s, t;
		cin >> s >> t;
		v.push_back({ s,t });
	}
	sort(v.begin(), v.end());
	/*for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << v[i].second;
	}*/
	for (int i = 0; i < N; i++) {
		pq.push(v[i].second);
		if (pq.top() <= v[i].first)
			pq.pop();
		/*if (!vis[i]) {
			q.push(v[i].second);
			check(q.front(), i);
			answer++;
		}*/
	}
	cout << pq.size();
	return 0;
}