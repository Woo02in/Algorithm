#include<iostream>
#include<algorithm>

using namespace std;

int N;
int vis[5001];
int main() {
	cin >> N;
		
	if (N % 2 == 0) {
		int cnt = N / 2;		
		for (int i = N; i > cnt; i--) {
			cout << i - cnt << " " << i << " ";
		}
	}
	else {
		int cnt = (N+1) / 2;
		cout << cnt << " ";
		for (int i = N; i > cnt; i--) {
			cout << i << " " << i-cnt << " ";
		}
	}

	return 0;
}