#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int N, M, Q;
int pointer[1000001];
string s;
int vis[1000001];
void fassign(int x, int y) {
	pointer[x] = pointer[y];
}

void fswap(int x, int y) {
	int tmp = pointer[x];
	pointer[x] = pointer[y];
	pointer[y] = tmp;

}

void freset(int x) {
	pointer[x] = 0;
}

int main() {
	cin >> N >> M >> Q;
	for (int i = 1; i <= M; i++) {
		cin >> pointer[i];
	}
	for (int i = 0; i < Q; i++) {
		cin >> s;
		if (s == "assign") {
			int x, y;
			cin >> x >> y;
			fassign(x, y);
		}
		else if (s == "swap") {
			int x, y;
			cin >> x >> y;
			fswap(x, y);
		}
		else if (s == "reset") {
			int x;
			cin >> x;
			freset(x);
		}
		else break;
	}
	vector<int> v;
	for (int i = 1; i <= M; i++) {
		if (pointer[i] != 0 && !vis[pointer[i]]) {
			v.push_back(pointer[i]);
			vis[pointer[i]] = 1;
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << '\n';
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;
}


