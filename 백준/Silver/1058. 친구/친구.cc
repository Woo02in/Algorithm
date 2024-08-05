#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define INF 987654321

using namespace std;

int N;
char Friend[51][51];
int dist[51][51];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			dist[i][j] = INF;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> Friend[i][j];
			if (Friend[i][j] == 'Y' && dist[i][j] == INF) {				
				dist[i][j] = 1;
			}
		}
	}

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (dist[i][k] != INF && dist[k][j] != INF && i != j) {
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			if (dist[i][j] <= 2) cnt++;
		}
		answer = max(answer, cnt);
	}
	cout << answer << endl;
	//for (int i = 0; i < N; i++) {
	//	for (int j = 0; j < N; j++) {
	//		cout << Friend[i][j] << " ";
	//		//cout << dist[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	return 0;
}