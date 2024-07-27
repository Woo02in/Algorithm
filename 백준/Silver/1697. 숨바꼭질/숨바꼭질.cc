#include<iostream>
#include<queue>
#include<utility>

using namespace std;
int N, K, answer = 0;
int near[3] = { -1, 1, 2 };
queue <int> q;
int vis[100001];

int main() {	
	
	cin >> N >> K;
	if (N == K) {
		printf("0");
		return 0;
	}
	else if (N > K) {
		printf("%d", N - K);
		return 0;
	}
	else {
		q.push(N);
		vis[N] = 0;
		while (!q.empty()) {
			int n = q.front(); // 5
			q.pop();

			if (n == K) {
				printf("%d", vis[n]);
			}
			for (int i = 0; i < 3; i++) {
				int nn;
				if (i == 2) {
					nn = n * near[i];
				}
				else {
					nn = n + near[i];
				}
				if (nn >= 0 && nn <= 100000 && vis[nn] == 0) {
					q.push(nn);
					vis[nn] = vis[n] + 1;
				}
			}
		}
	}
	
	return 0;
}