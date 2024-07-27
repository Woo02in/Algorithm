#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int army[100001];
vector<int> v;
int main() {
	int N, x;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		army[x]++;
		v.push_back(x);		
	}
	sort(army, army+100001);
	int maxi = army[100000];
	//cout << maxi;
	if (maxi -1 <= N - maxi) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}