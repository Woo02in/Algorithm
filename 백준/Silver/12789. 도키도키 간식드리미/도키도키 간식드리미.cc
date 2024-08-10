#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<queue>
using namespace std;

stack<int> sta;
int N;
queue<int> q;
queue<int> answer;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;		
		q.push(x);
	}
	int now = 1;	
	for(int i =0;i<2*N;i++){
		if (answer.size() == N) {
			break;
		}
		if (!q.empty() && q.front() == now) {
			answer.push(now);
			q.pop();
			now++;
		}
		else if (!sta.empty() && sta.top() == now) {
			answer.push(now);
			sta.pop();
			now++;
		}
		else {
			if (!q.empty()) {
				int cur = q.front();
				sta.push(cur);
				q.pop();
			}
		}
	}
	if (answer.size() == N) {
		cout << "Nice" << '\n';
	}
	else cout << "Sad" << '\n';

	
	return 0;
}