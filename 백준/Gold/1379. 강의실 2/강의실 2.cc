#include<iostream>
#include<algorithm>
#include<queue>
#include<utility>
using namespace std;

struct rule {
	int start, finish, num;
};
int N, c,s,f;

struct comp {
	bool operator()(rule a, rule b) {
		return a.finish > b.finish;
	}
};

bool com(rule a, rule b) {
	return a.start < b.start;
}

int main() {
	cin >> N;	
	vector<rule> Class(N, { 0,0,0 });
	vector<int> answer(N, 0);
	priority_queue<rule, vector<rule>, comp> pq;
	for (int i = 0; i < N; i++) {
		cin >> Class[i].num >> Class[i].start >> Class[i].finish;
	}
	sort(Class.begin(), Class.end(), com);
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (!pq.empty() && (pq.top().finish <= Class[i].start)) {
			answer[Class[i].num - 1] = answer[pq.top().num - 1];
			pq.pop();
		}
		else {
			cnt++;
			answer[Class[i].num - 1] = cnt;
		}
		pq.push(Class[i]);
	}
	cout << cnt << '\n';
	for (int i = 0; i < N; i++) {
		cout << answer[i] << '\n';
	}
	return 0;
}