#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<cstring>

using namespace std;
int N, M;
int map[10][10];

bool check(int n) {
	int num = sqrt(n);
	if (num * num == n) return true;
	else return false;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = -1;

	cin >> N >> M;
	string number = "";
	for (int i = 0; i < N; i++) {
		cin >> number;
		for (int j = 0; j < M; j++) {
			map[i][j] = number[j] - 48;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = -N; k < N; k++) {
				for (int q = -M; q < M; q++) {
					if (k == 0 && q == 0) continue;
					int a = i, b = j;
					int cur = 0;
					while (a >= 0 && a < N && b >= 0 && b < M) {
						cur *= 10;
						cur += map[a][b];
						if (check(cur))
							answer = max(answer, cur);
						a += k;
						b += q;
					}
					if (check(cur))
						answer = max(answer, cur);
				}

			}
		}
	}
	cout << answer << '\n';
	return 0;
}