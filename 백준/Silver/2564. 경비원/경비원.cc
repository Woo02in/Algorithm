//17:47
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;

int N, M, storecnt;
vector<pair<int, int>> v;
int main() {
	int x, y;
	cin >> N >> M >> storecnt;
	for (int i = 0; i <= storecnt; i++) {		
		cin >> x >> y;
		if (x == 1) {
			v.push_back({ 0,y });
		}
		else if (x == 2) {
			v.push_back({ M,y });
		}
		else if (x == 3) {
			v.push_back({y,0});
		}
		else if (x == 4) {
			v.push_back({y,N});
		}
	}
	int donguenx = v[storecnt].first;
	int dongueny = v[storecnt].second;
	int answer = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		if (donguenx == 0) {
			if (v[i].first == M) {
				answer += min((M + dongueny + v[i].second), (M+ N-dongueny + N-v[i].second));
			}
			else
				answer += abs(v[i].first - donguenx) + abs(v[i].second - dongueny);
		}
		else if (donguenx == M) {
			if (v[i].first == 0) {
				answer += min((M + dongueny + v[i].second), (M + N - dongueny + N - v[i].second));
			}
			else
				answer += abs(v[i].first - donguenx) + abs(v[i].second - dongueny);
		}
		else if (dongueny == 0) {
			if (v[i].second == N) {
				answer += min((N + donguenx + v[i].first), (N + M - donguenx + M - v[i].first));
			}
			else
				answer += abs(v[i].first - donguenx) + abs(v[i].second - dongueny);
		}
		else if (dongueny == N) {
			if (v[i].second == 0) {
				answer += min((N + donguenx + v[i].first), (N + M - donguenx + M - v[i].first));
			}
			else
				answer += abs(v[i].first - donguenx) + abs(v[i].second - dongueny);
		}
	}
	
	cout << answer << '\n';
	/*for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}*/
	return 0;
}
