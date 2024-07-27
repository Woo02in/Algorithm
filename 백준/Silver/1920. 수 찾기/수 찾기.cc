#include<iostream>
#include<algorithm>
using namespace std;
int arr[100001];


bool BinarySearch(int left, int right, int num) {
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == num)
			return 1;
		else if (arr[mid] < num)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return 0;
}

int main() {

	cin.sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr + N);
	cin >> M;
	int K;
	for (int i = 0; i < M; i++) {
		cin >> K;
		cout << BinarySearch(0, N - 1, K)<<"\n";
	}

	return 0;
}