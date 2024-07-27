

#include<iostream>
#include<algorithm>
using namespace std;
int arr[101];
//void re(int x, int y) {
//	int cnt = y;
//	for (int i = x; i <= y; i++) {
//		arr[i] = arr[cnt];
//		cnt--;
//	}
//}
int main() {
	int N = 0,  M = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < M; i++) {
		int start, end;
		cin >> start >> end;
		reverse(arr + start, arr + end+1);
	}
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}