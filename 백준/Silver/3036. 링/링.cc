#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

using namespace std;
int arr[101];
int n;
int cal(int a, int b) {
	return a % b ? cal(b, a%b) : b;
}

int main() {
	int t;
	cin >> t;
	cin >> arr[0];
	for (int i = 1; i < t; i++) {
		cin >> arr[i];
		n = cal(arr[0], arr[i]);
		cout << arr[0] / n << "/" << arr[i] / n << endl;

	}


	return 0;
}