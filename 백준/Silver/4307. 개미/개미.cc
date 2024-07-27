#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	int N, L;
	while (test--) {
		cin >> L >> N;
		int ant;
		int Min = 0 , Max = 0;
		while (N--) {
			cin >> ant;
			int min_ant = min(ant,L - ant);
			int max_ant = max(ant, L - ant);
			
			Min = max(Min, min_ant);
			Max = max(Max, max_ant);
		}
		cout << Min << " " << Max<<endl;
	}


	/*for (int q= 0; q < test; q++) {
		int N, K,x;
		vector<int>v;
		vector<int>ans;
		vector<int>ans_1;
		cin >> N >> K;
		for (int i = 0; i < K; i++) {
			cin >> x;
			v.push_back(x);
		}
		
		int tmp = 0;
		int cnt = N / 2;
		for (int i = 0; i < K; i++) {
			if (v[i] >= cnt) {
				v[i] = N - v[i];
			}
			tmp = v[i];
			ans.push_back(tmp);
		}
		sort(ans.begin(), ans.end());
		for (int i = 0; i < K; i++) {
			
			tmp = N - v[i];
			ans_1.push_back(tmp);
		}
		sort(ans_1.begin(), ans_1.end());
		cout <<ans[ans.size() - 1] <<" "<< ans_1[ans_1.size() - 1] << endl;
	}*/

	return 0;
}