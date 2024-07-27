#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {	
	int n; 
	cin >> n;
	vector<int>arr(n);
	vector<int>res(n);
	vector<int>num;
	int maxx = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		maxx = max(maxx, arr[i]);
	}
	num.resize(maxx + 1);
	for (int i = 0; i < n; i++)
		num[arr[i]]++;

	for (int i = 0; i < n; i++) {
		for (int k = 1; k * k <= arr[i]; k++) { 
			if (arr[i] % k == 0) {
				if (arr[i] / k != k)
					res[i] += num[k] + num[arr[i] / k];
				else
					res[i] += num[k];
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << res[i] - 1 << "\n"; 
	return 0;
}