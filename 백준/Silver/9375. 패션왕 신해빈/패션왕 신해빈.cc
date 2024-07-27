#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t, n;
	cin >> t;


	while (t--) {
		vector<pair<string, int>>v;
		cin >> n;
		int ans = 1;
		while (n--) {
			string name, kind;
			bool flag = false;
			cin >> name >> kind;
			if (v.empty()) {
				v.emplace_back(make_pair(kind, 1));
			}
			else {
				for (int i = 0; i < v.size(); i++) {
					if (v[i].first == kind) {
						flag = true;
						v[i].second++;
					}
				}
				if (!flag) v.emplace_back(make_pair(kind, 1));
			}
			
		}
		for (int i = 0; i < v.size(); i++) {
			ans *= (v[i].second + 1);
		}
		cout << ans - 1 << "\n";
		v.clear();
	}
	
	return 0;
}