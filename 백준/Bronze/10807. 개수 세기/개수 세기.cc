#include<iostream>

using namespace std;

int arr[101];

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	int N, V;
	int cnt = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> V;
	
	for (int i = 0; i < N; i++) {
		if (V == arr[i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}