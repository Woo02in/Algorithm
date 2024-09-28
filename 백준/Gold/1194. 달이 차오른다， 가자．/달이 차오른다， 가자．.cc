#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int n, m;
char map[51][51];
bool visit[51][51][1 << 6];

pair<int, int> start;
vector<pair<int, int>> End;

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

void input() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string inp;
        cin >> inp;
        for (int j = 0; j < m; j++) {
            map[i][j] = inp[j];
            if (map[i][j] == '0') {
                start.first = i;
                start.second = j;
                map[i][j] = '.';
            }
            else if (map[i][j] == '1') {
                End.push_back({i, j});
            }
        }
    }
}

bool CheckKey(int cur_key, char door) {
    int r_value = cur_key & (1 << (int(door) - 'a'));
    return r_value != 0;
}

int bfs(int a, int b) {
    queue<pair<pair<int, int>, pair<int, int>>> q;
    queue<pair<int, int>> door[26];
    q.push({ {a, b}, {0, 0} });
    visit[a][b][0] = true;

    while (!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cnt = q.front().second.first;
        int key = q.front().second.second;
        q.pop();

        if (map[x][y] == '1') return cnt;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                if (!visit[nx][ny][key]) {
                    if (map[nx][ny] == '.' || map[nx][ny] == '1') {
                        visit[nx][ny][key] = true;
                        q.push({ {nx, ny}, {cnt + 1, key} });
                    }
                    else if ('a' <= map[nx][ny] && map[nx][ny] <= 'f') {
                        int tmp_key = key | (1 << (int(map[nx][ny] - 'a')));
                        visit[nx][ny][tmp_key] = true;
                        q.push({ {nx, ny}, {cnt + 1, tmp_key} });
                    }
                    else if ('A' <= map[nx][ny] && map[nx][ny] <= 'F') {
                        if (CheckKey(key, map[nx][ny])) {
                            visit[nx][ny][key] = true;
                            q.push({ {nx, ny}, {cnt + 1, key } });
                        }
                    }
                }
            }
        }
    }
    return -1;
}

void solution() {
    int r = bfs(start.first, start.second);
    cout << r << '\n';
}

void solve() {
    input();
    solution();
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}
