
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;


int main() {

	int N, K, max;
	vector<int>v;
	vector<int>p;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &K);
		v.push_back(K);
	}
	sort(v.begin(), v.end());
	
	for (int i = 1; i <= N; i++) {
		max = v[N - i] * i;
		p.push_back(max);
	}
	sort(p.begin(), p.end());
	printf("%d", p[N - 1]);

	return 0;
}