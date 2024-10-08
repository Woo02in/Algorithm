#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int n, T;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	priority_queue<int, vector<int>, greater<int>>pq;
	cin >> T;

	while(T--){
		cin >> n;
		if (n == 0) {
			if (pq.empty()) {
				cout << '0' << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else {
			pq.push(n);
		}
	}
	return 0;
}