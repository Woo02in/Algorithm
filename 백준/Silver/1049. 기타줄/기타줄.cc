#include<iostream>
#include<algorithm>

using namespace std;

int Set[51];
int One[51];

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> Set[i] >> One[i];
	}
	sort(Set, Set + M);
	sort(One, One + M);
	int set = Set[0];
	int one = One[0];
	int ans = 0;
	if (set >= 6 * one) {
		ans = N * one;
	}
	else {
		ans = min(((N / 6)*set + (N % 6) *one), (N / 6 + 1)*set);
	}
	cout << ans;
	return 0;
}
