#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
#include<utility>

using namespace std;
vector<pair<int, int>>V;
typedef long long ll;

int cal(int x, int y) {
	return x > y ? y : x;
}

int main() {
	int N, n, m;
	ll sum = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &n, &m);
		V.push_back(make_pair(m, n)); // color , point
	}
	sort(V.begin(), V.end());
	
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			if (V[i].first == V[i + 1].first) {
				sum += V[i + 1].second - V[i].second;
				continue;
			}
		}
		else if (i != 0 && i != N - 1) {
			if (V[i].first == V[i + 1].first && V[i].first == V[i - 1].first) {
				sum += cal(V[i].second - V[i - 1].second, V[i + 1].second - V[i].second);
				continue;
			}
			else if (V[i].first == V[i - 1].first) {
				sum += V[i].second - V[i - 1].second;
				continue;
			}
			else if (V[i].first == V[i + 1].first) {
				sum += V[i + 1].second - V[i].second;
				continue;
			}
		}
		else if(i == N - 1) {
			if (V[i].first == V[i - 1].first) {
				sum += V[i].second - V[i - 1].second;
				continue;
			}
		}
	}

	printf("%lld", sum);
	

	return 0;
}
// 15975