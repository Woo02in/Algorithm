#include<iostream>
#include<algorithm>
#include<queue>
typedef long long ll;
using namespace std;

ll n, m;

priority_queue<ll, vector<ll>, greater<ll>> pq;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		pq.push(x);
	}
	
	for (int i = 0; i < m; i++) {
		ll tmp = 0;
		tmp += pq.top();
		pq.pop();
		tmp += pq.top();
		pq.pop();
		pq.push(tmp);
		pq.push(tmp);		
	}
	ll sum = 0;
	while(!pq.empty()){
		sum += pq.top();
		pq.pop();
	}
	cout << sum << '\n';
	return 0;
}