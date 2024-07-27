#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		priority_queue<int, vector<int>, greater<int>> jun;
		priority_queue<int, vector<int>, greater<int>> bi;
		cin >> N >> M;
		for (int i = 0; i < N; i++){
			int x;
			cin >> x;
			jun.push(x);
		}
		for (int i = 0; i < M; i++) {
			int x;
			cin >> x;
			bi.push(x);
		}
		while (!jun.empty() && !bi.empty()) {
			if (jun.top() < bi.top()) {
				jun.pop();
			}
			else if (jun.top() > bi.top()) {
				bi.pop();
			}
			else{
				bi.pop();
			}
		}
		if (jun.size() > 0 && bi.size() == 0) {
			cout << 'S' << endl;
		}
		else if (jun.size() == 0 && bi.size() > 0) {
			cout << 'B' << endl;
		}
		else cout << 'C' << endl;
	}
	
	return 0;
}