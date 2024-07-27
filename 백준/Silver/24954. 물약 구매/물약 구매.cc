#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int N, answer, cnt;
int potion[1001], copy_potion[1001];
int vis[1001];
vector<pair<int,int>> sale[1001];
vector<int> ordering;
void solution() {
	for (int i = 0; i < ordering.size(); i++) {
		cnt += copy_potion[ordering[i]];
		for (int j = 0; j < sale[ordering[i]].size(); j++) {
			copy_potion[sale[ordering[i]][j].first] -= sale[ordering[i]][j].second;
			if (copy_potion[sale[ordering[i]][j].first] <= 0) copy_potion[sale[ordering[i]][j].first] = 1;
		}
	}
	answer = min(answer, cnt);
	/*for (int i = 0; i < ordering.size(); i++) {
		cout << ordering[i] << " ";
	}
	cout << endl;*/

}

void order(int count) {
	if (count == N) {
		cnt = 0;
		for (int i = 1; i <= N; i++) {
			copy_potion[i] = potion[i];
		}
		solution();
	}
	for (int i = 1; i <= N; i++) {
		if (!vis[i]) {
			count++;
			vis[i] = 1;
			ordering.push_back(i);
			order(count);
			count--;
			vis[i] = 0;
			ordering.pop_back();
		}
	}
}
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> potion[i];		
		answer += potion[i];
	}
	for (int i = 1; i <= N; i++) {
		int n;
		cin >> n;
		while (n--) {
			int a, b;
			cin >> a >> b;
			sale[i].push_back({a,b});
		}
	}
	order(0);
	cout << answer << '\n';
	return 0;
}