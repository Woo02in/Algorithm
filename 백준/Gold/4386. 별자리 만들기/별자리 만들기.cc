#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int root[101];
struct info {
	double cost;
	int from, to;
};

bool cmp(const info &a, const info &b) {
	return a.cost < b.cost;
}

double dis(double x1, double y1, double x2, double y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1)*(y2 - y1));
}

int find(const int &node) {
	if (root[node] == node) {
		return root[node];
	}
	else {
		return root[node] = find(root[node]);
	}
}


int main() {
	int n;
	double ans = 0;
	cin >> n;
	vector<pair<double, double>> Point(n+1);
	for (int i = 1; i <= n; i++) {
		cin >> Point[i].first >> Point[i].second;
	}

	vector<info> stars;

	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			double Dis = dis(Point[i].first, Point[i].second, Point[j].first, Point[j].second);
			stars.push_back({ Dis,i,j });
		}
	}
	sort(stars.begin(), stars.end(), cmp);
	for (int i = 1; i <= n; i++) {
		root[i] = i;
	}
	for (int i = 0; i < stars.size(); i++) {
		int start = find(stars[i].from);
		int end = find(stars[i].to);
		double Cost = stars[i].cost;
		if (start != end) {
			root[start] = end;
			ans += Cost;
		}
	}
	printf("%0.2lf", ans);

	return 0;
}