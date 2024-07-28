#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<stdio.h>
#include<cmath>
using namespace std;

int vis[21];
int N;
double answer;
vector<pair<int, int>> position;

double calc() {
	double x = 0, y = 0;
	for (int i = 0; i < N; i++) {
		if (vis[i]) {
			x -= position[i].first;
			y -= position[i].second;
		}
		else {
			x += position[i].first;
			y += position[i].second;
		}
	}
	return sqrt(pow(x, 2) + pow(y, 2));
}

void pick(int s, int cnt) {
	if (cnt == N/2) {
		answer = min(answer, calc());		
		return;
	}
	for (int i = s; i < N; i++) {
		if (!vis[i]) {
			vis[i] = 1;
			pick(i,cnt + 1);
			vis[i] = 0;
		}
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		for (int i = 0; i < 20; i++) {
			vis[i] = 0;
		}
		answer = 987654321;
		position.clear();
		cin >> N;
		for (int i = 0; i < N; i++) {
			int a, b;
			cin >> a >> b;
			position.push_back({ a,b });
		}
		pick(0, 0);
		printf("%.7lf\n", answer);
	}
	
	return 0;
}