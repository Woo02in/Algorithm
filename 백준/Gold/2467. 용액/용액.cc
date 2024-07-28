#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int N, sum;
int ans[2];
int portion[100001];
int value = 2000000000;

void binarysearch() {
	int left = 0, right = N - 1;
	while (left < right) {
		sum = portion[left] + portion[right];
		if (abs(sum) < value) {
			ans[0] = portion[left];
			ans[1] = portion[right];
			value = abs(sum);
		}
		if (sum < 0)left++;
		else right--;
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> portion[i];
	}
	binarysearch();
	sort(ans, ans + 2);
	cout << ans[0] << " " << ans[1]<<'\n';
	return 0;
}