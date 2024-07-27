#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int N, sum;
int solution[100001];
int value = 2000000000;
int ans[2];
void binarysearch() {
	int left = 0, right = N - 1;
	while (left < right) {
		sum = solution[left] + solution[right];
		if (abs(sum) < value) {		
			ans[0] = solution[left];
			ans[1] = solution[right];
			value = abs(sum);
		}
		if (sum < 0)left++;
		else right--;
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> solution[i];
	}
	sort(solution, solution + N);
	binarysearch();
	
	sort(ans, ans + 2);
	cout << ans[0] << " " << ans[1] << endl;
	return 0;
}