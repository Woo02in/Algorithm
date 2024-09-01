#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>

using namespace std;
int N;
int arr[500001];
vector<int> v;
long long answer; 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	
	for (int i = 0; i < N; i++) {
		answer += abs((i + 1) - v[i]);
	}
	cout << answer;
	return 0;
}