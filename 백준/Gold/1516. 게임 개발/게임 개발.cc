//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int N;
//vector<int> pre[501];
//int answer[501];
//int building[501];
//int vis[501];
//
//void check(int start,int cur) {
//	vis[start] = 1;
//	for (int j = 0; j < pre[start].size(); j++) {				
//		if (!vis[pre[start][j]-1]) {
//			answer[cur] += answer[pre[start][j] - 1];
//			for (int i = 0; i < pre[pre[start][j] - 1].size(); i++) {
//				vis[pre[pre[start][j] - 1][i]-1] = 1;
//			}
//		}
//	}
//	
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int x;
//		cin >> building[i];		
//		answer[i] += building[i];
//		while (true) {
//			cin >> x;
//			if (x == -1) break;
//			pre[i].push_back(x);
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < 501; j++) {
//			vis[j] = 0;
//		}
//		check(i,i);
//		
//	}
//	
//
//	for (int i = 0; i < N; i++) {
//		cout << answer[i] << '\n';
//	}
//	
//	return 0;
//}

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define endl "\n"

using namespace std;

vector<int> building[501];
vector<int> result;
int cost[501];
int cost2[501];
int adj[501];
int n;

void topological() {
    queue<int> q;

    for (int i = 0; i <= n; i++) {
        cost2[i] = cost[i];
    }

    for (int i = 1; i <= n; i++) {
        if (adj[i] == 0) {
            q.push(i);
        }
    }

    while (q.size() > 0) {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < building[cur].size(); i++) {
            int next = building[cur][i];
            adj[next]--;
            if (adj[next] == 0) {
                q.push(next);
            }
            cost2[next] = max(cost2[next], cost2[cur] + cost[next]);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << cost2[i] << endl;
    }

    return;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
        int b;
        while (cin >> b) {
            if (b == -1) {
                break;
            }
            adj[i]++;
            building[b].push_back(i);
        }
    }

    topological();

    return 0;
}