#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int T, N;
vector<pair<int, int>> v;
int main() {
	cin >> T;
	while (T--) {
		cin >> N;
		int answer = 0;
		for (int i = 0; i < N; i++){
			int x = 0, y = 0;
			cin >> x >> y;
			v.push_back({ x,y });
		}
		sort(v.begin(), v.end());
		/*for (int i = 0; i < N; i++) {
			cout << v[i].first << " " << v[i].second;
		}*/
		int maximum = v[0].second;

		for (int i = 1; i < N; i++) {
			if (v[i].second < maximum) {
				answer++;
				maximum = v[i].second;
			}
		}
		cout << answer +1<<endl;
		v.clear();
	}

	
	return 0;
}