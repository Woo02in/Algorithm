#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int N, answer;
vector<pair<int, int>>schedule;

int compare(pair<int,int> a, pair<int,int> b) {
	return a.second > b.second;
}
 
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int take, close;
		cin >> take >> close;
		schedule.push_back({ take, close });
	}
	sort(schedule.begin(), schedule.end(), compare);
	int tmp = 0, left = 0;
	for (int i = 0; i < N; i++) {
		if (i != 0) {
			if (schedule[i].second >= tmp) {
				left += schedule[i].second - tmp;
			}
			else if (tmp - schedule[i].second >= left) left = 0;
			else if (tmp - schedule[i].second < left)left -= tmp - schedule[i].second;
		}
		tmp = schedule[i].second - schedule[i].first;
	}
	if (left > 0)tmp -= left;
	if (tmp < 0)cout << -1 << endl;
	else cout << tmp << endl;
	/*for (int i = 0; i < schedule.size(); i++) {
		cout << schedule[i].first << " " << schedule[i].second << endl;
	}*/
	return 0;
}