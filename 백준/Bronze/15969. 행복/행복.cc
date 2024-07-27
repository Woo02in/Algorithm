#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int happy[1001];
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> happy[i];
	}
	sort(happy, happy + N);
	int ans = happy[N - 1] - happy[0];
	cout << ans;
	return 0;
}
