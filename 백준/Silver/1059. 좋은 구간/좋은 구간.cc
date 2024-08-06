#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int L, n;
vector<int> v;

int main() {
	int x;
	int answer = 0;
	cin >> L;
	for (int i = 0; i < L; i++) {
		cin >> x;
		v.push_back(x);
	}
	cin >> n;
	sort(v.begin(), v.end());
	int left = 0;
	int mid = L / 2;
	int right = L - 1;
	while (left < right) {
		if (n > v[mid]) left = mid+1;
		else right = mid;
		mid = (left + right) / 2;
	}

	for (int i = v[right - 1] + 1; i < v[right]; i++) {
		if (i <= n) {
			answer += v[right] - n;
		}		
	}
	//cout << left << " " << right;
	if (answer == 0) cout << answer << endl;
	else cout << answer - 1 << endl;
	return 0;
}
