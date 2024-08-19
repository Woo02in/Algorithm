#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
typedef long long ll;

using namespace std;
ll N;
ll arr[100001];
map<long long, int> war;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string end = "SYJKGW";
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		bool flag = true;
		int x, count = -1;
		ll ans = 0;
		cin >> x;
		for (int j = 0; j < x; j++) {
			ll soldier;
			cin >> soldier;
			war[soldier]++;
			if (war[soldier] > count) {
				count = war[soldier];
				ans = soldier;
			}
		}
		if (count > x / 2) cout << ans << '\n';
		else cout << end << '\n';
		war.clear();
	}

	return 0;
}