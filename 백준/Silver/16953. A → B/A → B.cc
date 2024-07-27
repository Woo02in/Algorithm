#include<iostream>
#include<algorithm>
#include<utility>
#include<queue>
using namespace std;

int main() {	
	long long a, b, answer = -1;
	queue<pair<long long int, int>> q;
	cin >> a >> b;
	q.push(make_pair(a, 1));
	while (!q.empty()){
		long long k = q.front().first;
		int n = q.front().second;
		q.pop();
		if (k == b) {
			answer = n;
			break;
		}
		if (k * 2 <= b) {
			q.push(make_pair(k * 2, n + 1));
		}
		if (k * 10 + 1 <= b) {
			q.push(make_pair(k * 10 + 1, n + 1));
		}
	}
	cout << answer;
	return 0;
}