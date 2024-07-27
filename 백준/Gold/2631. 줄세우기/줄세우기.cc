#include<iostream>
using namespace std;

int arr[201];
int DP[201];

int main() {
	int N, max = 0 ;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	
	for (int i = 1; i <= N; i++) {
	    DP[i] = 1;
        for (int j = 1; j <= i; j++) {
			if (arr[j] < arr[i] && DP[i] < DP[j] + 1) {

				DP[i] = DP[j] + 1;
			}
		}
		if (max < DP[i]) max = DP[i];
	}
	cout << N - max <<endl;
	return 0;
}