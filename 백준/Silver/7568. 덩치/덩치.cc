
#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<pair<int, int>,int>> p;
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		p.push_back({ { x,y }, 1 });
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j)
				continue;
			if (p[i].first.first > p[j].first.first && p[i].first.second > p[j].first.second) {
				p[j].second++;
			}
		}	
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", p[i].second);
	}

	return 0;
}