#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

long long N, M, B, ans = 999999999999;
vector < pair<int, int>> p;
vector<int> map;

int main() {
	int x;
	cin >> N >> M >> B;
	int block;
	for (int i = 0; i < N*M; i++) {
		cin >> x;
		map.push_back(x);
		//minheight += x;
		//maxheight += x;
	}
	//minheight = minheight / 12;
	//maxheight = maxheight / 12;
	//sort(map.begin(), map.end());
	for (int i = 0; i <= 256; i++) {
		block = B;
		int cnt = 0;
		//cout << i << endl;
		for (int j = 0; j < N * M; j++) {
			if (map[j] == i) continue;
			else if (map[j] > i) {
				cnt += (map[j] - i) * 2;
				block += map[j] - i;
			}
			else {				
				block -= i - map[j];
				cnt += i - map[j];								
			}
			//cout<<"i : "<<i << " cnt : " << cnt << " block : " << block << endl;
		}
		//cout << i << " " << cnt<<endl;
		if (ans >= cnt && block>=0) {
			ans = cnt;
			//cout << ans << endl;
			if (p.size() != 0) {
				p.pop_back();
			}
			p.push_back({ ans,i });
		}
		//ans = min(ans, cnt);
	}
	
	cout << p.front().first << " " << p.front().second;
	//cout << map[map.size() - 1];
	return 0;
}