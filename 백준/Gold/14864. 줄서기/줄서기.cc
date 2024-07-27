#include<iostream>

using namespace std;
typedef long long ll;

int visit[1000001], stu[1000001];
ll x, y;
int main() {
	int N, M;
	cin >> N >> M;
	for (ll i = 1; i <= M; i++) {
		cin >> x >> y;
		stu[x]++;
		stu[y]--;
	}
	/*for (int i = 1; i <= M; i++) {
		cout << stu[i] << " ";
	}*/
	for (ll i = 1; i <= N; i++) {
		stu[i] += i;
		visit[stu[i]]++;
	}
	/*for (int i = 1; i <= M; i++) {
		cout << visit[i] << " ";
	}*/
	for (ll i = 1; i <= N; i++) {
		if (visit[i] == 0 || visit[i] >= 2) {
			cout << "-1" << endl;
			return 0;
		}
	}
	for (ll i = 1; i <= N; i++) {
		cout << stu[i]<<" ";
	}
	
	return 0;
}