#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int N, cnt, ans;
vector<int> building;


int main() {
	cin >> N;	
	int cnt[51] = {0,};
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		building.push_back(x);		
	}
	for (int i = 0; i < N; i++) {
		double max = -10000000000;
		for (int j = i + 1; j < N; j++) {			
			int height = building[j] - building[i];
			int width = j - i;
			double distance = height * 1.0 / width;
			if (distance <= max)
				continue;
			max = distance;
			cnt[i]++;
			cnt[j]++;
		}
	}
	sort(cnt, cnt + N);
	cout << cnt[N - 1] << endl;

	return 0;
}