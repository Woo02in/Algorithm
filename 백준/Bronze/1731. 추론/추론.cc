#include<iostream>


using namespace std;

int main() {
	int N, arr[51] = { 0, };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	if (arr[2] - arr[1] == arr[1] - arr[0]) {
		cout << arr[N - 1] + arr[2] - arr[1] << endl;
	}
	else if (arr[2] / arr[1] == arr[1] / arr[0]) {
		cout << arr[N - 1] * (arr[2] / arr[1]) << endl;
	}

	return 0;
}