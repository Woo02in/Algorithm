#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int answer[81];

int main() {
	int s1, s2, s3, cnt = 0,i;
	cin >> s1 >> s2 >> s3;
	for (i = 1; i <= s1; i++) {
		cnt = 0;
		cnt += i;
		for (int j = 1; j <= s2; j++) {
			cnt += j;
			for (int k = 1; k <= s3; k++) {
				cnt += k;
				answer[cnt]++;
				cnt -= k;
			}
			cnt -= j;
		}
		cnt -= i;
	}
	int ans = 0, result = 0;
	//sort(answer, answer + 80);
	for (i = 0; i < s1 + s2 + s3; i++) {
		if (answer[i] > ans) {
			ans = answer[i];
			result = i;
		}
	}
	cout << result;
	return 0;
}