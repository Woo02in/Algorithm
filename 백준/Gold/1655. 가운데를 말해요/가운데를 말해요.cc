#include<iostream>
#include<queue>

using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	priority_queue<int, vector<int>, greater<int>> pq_min;
	priority_queue<int, vector<int>, less<int>> pq_max;
	int x;
	while (N--) {
		cin >> x;
		if (pq_max.size() > pq_min.size()) pq_min.push(x);
		else pq_max.push(x);

		if (!pq_max.empty() && !pq_min.empty() && pq_max.top() > pq_min.top()) {
			int a = pq_max.top(), b = pq_min.top();
			pq_max.pop(); pq_min.pop();
			pq_max.push(b);
			pq_min.push(a);
		}
		cout << pq_max.top() << "\n";
	}

	return 0;
}