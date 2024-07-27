#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
typedef long long ll;
using namespace std;

struct rule {
	ll pn;
	ll cn;
	int check;
};

ll N, parent, node, dis, answer;
vector<rule> tree[100001];
bool vis[100001];
int cc;

void dfs(ll p, ll c, ll par) {	
	/*for (int i = 1; i <= 7; i++) {
		cout << vis[i] << " ";
	}*/
		for (int i = 0; i < tree[p].size(); i++) {
		if (vis[tree[p][i].pn]) {
			continue;
		}
		/*cout << "p : " << p << endl;
		cout << "i : " << i << endl;*/
		c += tree[p][i].cn;
		//cout <<" c : " << c  << endl;
		vis[tree[p][i].pn] = true;
		if (c > answer) {
			answer = c;
			cc = tree[p][i].pn;
		}
		//answer = max(c, answer);
		dfs(tree[p][i].pn, c, p);
		vis[tree[p][i].pn] = false;		
		//cout <<" answer : " << answer <<en dl;
		c -= tree[p][i].cn;
	}
		//cout << endl;
	
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> parent;
		while (true) {
			cin >> node;
			if (node == -1) break;
			cin >> dis;			
			tree[parent].push_back({ node, dis, 1});
		}
	}
	/*for (int i = 1; i<=5; i++) {
		for (int j = 0; j < tree[i].size(); j++) {
			cout << tree[i][j].pn << " " << tree[i][j].cn<<endl;
		}
		cout << endl;
	}*/
	/*for (int i = 1; i <= N; i++) {		
		vis[i] = true;
		dfs(i, 0, -1);
		vis[i] = false;
	}*/
	vis[1] = true;
	dfs(1, 0, -1);
	vis[1] = false;
	vis[cc] = true;
	dfs(cc, 0, -1);

	cout << answer<<endl;
	return 0;
}