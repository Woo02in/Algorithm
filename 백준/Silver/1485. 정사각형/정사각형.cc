#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
typedef long long ll;
using namespace std;
int N;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	while (N--) {		
		vector<pair<int, int>> v;
		vector<int> line;
		for (int i = 0; i < 4; i++) {
			int a, b;
			cin >> a >> b;
			v.push_back({ a,b });
		}
		for (int i = 0; i < 4; i++) {
			for (int j = i + 1; j < 4; j++) {
				line.push_back(pow(v[i].second - v[j].second, 2) + pow(v[i].first - v[j].first, 2));
			}
		}
		sort(line.begin(), line.end());
		if (line[0] == line[1] && line[1] == line[2] && line[2] == line[3] && line[4] == line[5]) {
			cout << 1 << '\n';
		}
		else cout << 0 << '\n';		
	}

	return 0;
}