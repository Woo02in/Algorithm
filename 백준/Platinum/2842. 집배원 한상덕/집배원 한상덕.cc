#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cstdio>
#include <string>
#include <deque>

using namespace std;

int N;
char miro[51][51];
int slope[51][51];
int check[51][51];
int dx[8] = { 1,0,-1,0,1,1,-1,-1 };
int dy[8] = { 0,1,0,-1,1,-1,-1,1 };
vector<int> tire;
pair<int, int> start;
int house = 0;

int bfs(int low, int high) {
	queue<pair<int, int>> q;
	if (slope[start.first][start.second] >= tire[low] && slope[start.first][start.second] <= tire[high]) {
		q.push(make_pair(start.first, start.second));
		check[start.first][start.second] = 1;
	}
	int visit = 0;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (xx >= 1 && yy >= 1 && xx <= N && yy <= N) {
				if (check[xx][yy] == 0 && slope[xx][yy] >= tire[low] && slope[xx][yy] <= tire[high]) {
					check[xx][yy] = 1;
					q.push(make_pair(xx, yy));
					if (miro[xx][yy] == 'K') visit++;
				}
			}
		}
	}
	if (visit == house) {
		return 1;
	}
	else return 2;
}

void solve() {
	sort(tire.begin(), tire.end());
	tire.erase(unique(tire.begin(), tire.end()), tire.end());
	int low = 0;
	int high = 0;
	int result = 999999999;
	while (low < tire.size()) {
		memset(check, 0, sizeof(check));
		int ans = bfs(low, high);
		if (ans == 1) {
			result = min(result, tire[high] - tire[low]);
			low++;
		}
		else {
			if (high < tire.size() - 1) high++;
			else break;
		}
	}
	cout << result;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> miro[i][j];
			if (miro[i][j] == 'P') {
				start.first = i;
				start.second = j;
			}
			else if (miro[i][j] == 'K') house++;
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> slope[i][j];
			tire.push_back(slope[i][j]);
		}
	}
	solve();
	return 0;
}
