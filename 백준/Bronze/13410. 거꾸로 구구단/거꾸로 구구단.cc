#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int rev(int n) {
	string s = to_string(n);
	reverse(s.begin(), s.end());
	return atoi(s.c_str());
}

int main() {
	int N, K, idx = 0, arr[1001] = {0,};
	cin >> N >> K;
	for (int i = 0; i < K; i++) {
		idx = N * (i+1);
		arr[i] = rev(idx);
	}

	sort(arr, arr + K);
	cout << arr[K-1];
	return 0;
}