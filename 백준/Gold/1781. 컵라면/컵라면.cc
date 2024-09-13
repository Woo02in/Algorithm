#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> v;
int n;
priority_queue<int> pq;
bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first > b.first;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
		v[i].first--;
	}

	sort(v.begin(), v.end(), cmp);

	long long sum = 0;
	

	for (int i = n - 1, j = 0; i >= 0; i--) {

		while (j < n && i == v[j].first) {			
			pq.push(v[j].second);
			j++;
		}

		if (!pq.empty()) {
			sum += pq.top();
			pq.pop();
		}

	}

	cout << sum;
	return 0;
}


