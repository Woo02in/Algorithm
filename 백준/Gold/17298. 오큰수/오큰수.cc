#include<iostream>
#include<algorithm>
#include<stack>
#include<utility>

using namespace std;

int N;
stack<pair<int,int>> sta;
int arr[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	

	cin >> N;
	for (int i = 0; i < N; i++) {
		int x; 
		cin >> x;		
				
		if (sta.empty()) {
			sta.push({ x,i });
			continue;
		}
		if (sta.top().first < x) {
			int size = sta.size();
			while (size--) {
				if (sta.top().first < x) {
					arr[sta.top().second] = x;
					sta.pop();
				}
				else {
					sta.push({ x, i});
					break;
				}
			}
			sta.push({ x,i });
		}
		else {				
			sta.push({ x,i });
		}
	}
	
	for (int i = 0; i < N; i++) {
		if (arr[i] == 0) cout << -1 << " ";
		else cout << arr[i] << " ";
	}

	return 0;
}