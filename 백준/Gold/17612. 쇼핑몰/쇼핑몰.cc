#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<queue>
using namespace std;

int main() {
	int N, k;
	cin >> N >> k;
	vector<pair<int, int>> v;
	int id, w;
	for (int i = 0; i < N; i++) {
		cin >> id >> w;
		v.push_back({ id,w }); // 손님, 무게
	}
	priority_queue<pair<int, int>>pq; // 계산대 pq(내림차순 정렬)
	for (int i = 0; i < k; i++) {
		pq.push({ 0,-i });
	}
	vector < pair<pair<int, int>, int>> user_info;
	for (int i = 0; i < N; i++) {
		int wait = -(pq.top().first); // pq를 정렬할 때 음수로 정렬함 => 앞에 마이너스 등호
		int counter_num = -(pq.top().second); // pq 정렬 음수 => 마이너스
		pq.pop();
		int next_wait = wait + v[i].second;
		user_info.push_back({ {next_wait, -(counter_num)},i});
		
		pq.push({ -next_wait, -(counter_num) }); // next_wait은 양수, counter_num은 양수
	}
	sort(user_info.begin(), user_info.end());
	long long answer = 0;
	for (int i = 0; i < N; i++) {
		answer += (i + 1) * (long long)v[user_info[i].second].first; 
	}
	cout << answer;
	return 0;
}