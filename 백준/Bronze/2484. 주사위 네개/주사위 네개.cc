#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> ans;
int arr[1001][4];
int main() {
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int dice[7] = { 0, };
		int sum = 0;
		bool flag = true;
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
			dice[arr[i][j]] ++;
		}

		for (int k = 1; k <= 6; k++) {
			if (dice[k] != 0) {
				sum++;
			}
		}
		int cnt = 0;
		if (sum == 1) {
			for (int i = 1; i <= 6; i++) {
				if (dice[i] == 4) {
					cnt = 0;
					cnt = 50000 + (i * 5000);
					ans.push_back(cnt);
					break;
				}
			}
		}
		else if (sum == 2) {
			for (int i = 1; i <= 6; i++) {
				if (dice[i] == 3) {
					cnt = 0;
					cnt = 10000 + (i * 1000);
					ans.push_back(cnt);
					break;
				}
				else if (dice[i] == 2) {
					flag = false;
					cnt += (500 *i);
				}
			}
			if(!flag) ans.push_back(cnt + 2000);
		}
		else if (sum == 3) {
			for (int i = 1; i <= 6; i++) {
				if (dice[i] == 2) {
					cnt = 0;
					cnt = 1000 + (i * 100);
					ans.push_back(cnt);
					break;
				}
			}
		}
		else if(sum == 4) {
			for (int i = 6; i >= 1; i--) {
				if (dice[i] == 1) {
					cnt = 0;
					cnt = i * 100;
					ans.push_back(cnt);
					break;
				}
			}
		}
		sort(ans.begin(), ans.end());
	}
	cout << ans[ans.size()-1] << endl;
	
	return 0;
}
