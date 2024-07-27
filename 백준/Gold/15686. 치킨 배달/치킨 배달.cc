#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cmath>

using namespace std;

int N, M;
int map[51][51];
int vis[51][51];
struct Chicken {
	int x;
	int y;
	int visit;
};
vector<pair<int, int>> house;
vector<Chicken> chicken;
int answer = 999999999;
void dfs() {
	int distance = 0;
	for (int i = 0; i < house.size(); i++) {
		int minDistance = 99999999;
		for (int j = 0; j < chicken.size(); j++) {
			if (chicken[j].visit) {
				int houseDistance = abs(house[i].first - chicken[j].x) + abs(house[i].second - chicken[j].y);
				minDistance = min(minDistance, houseDistance);
			}
		}
		distance += minDistance;
	}
	answer = min(answer, distance);
}


void choose_chicken(int start, int count) {
	if (count == M) {
		dfs();
	}
	for (int i = start; i < chicken.size(); i++) {
		if (chicken[i].visit == 0) {
			chicken[i].visit = 1;
			choose_chicken(i, count + 1);
			chicken[i].visit = 0;
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) {
				house.push_back({ i,j });
			}
			else if (map[i][j] == 2) {
				chicken.push_back({i,j,0});
			}
		}
	}
	choose_chicken(0,0);
	cout << answer << endl;
	return 0;
}