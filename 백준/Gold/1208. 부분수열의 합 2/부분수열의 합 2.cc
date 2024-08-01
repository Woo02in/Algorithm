#include <iostream>
#include <map>
using namespace std;

int num[41];
int N,S;
map<int, int> total;
long long answer = 0;

void leftSum(int st, int sum) {
	if (st == N / 2) {
		total[sum]++;
		return;
	}
	leftSum(st + 1, sum);
	leftSum(st + 1, sum + num[st]);
}

void rightSum(int m, int sum) {
	if (m == N) {
		answer += total[S - sum];
		return;
	}
	rightSum(m + 1, sum);
	rightSum(m + 1, sum + num[m]);
}

int main() {
	cin.tie(0); cout.tie(0);
	ios_base::sync_with_stdio(NULL);
	cin >> N >> S;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	leftSum(0, 0);
	rightSum(N / 2, 0);
	if (S == 0)
		cout << answer - 1;
	else
		cout << answer;
}