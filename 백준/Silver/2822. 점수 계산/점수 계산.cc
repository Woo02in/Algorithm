#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<queue>
#include<vector>
#include<utility>
using namespace std;

vector<pair<int, int>>v;
int arr[5];
int n;
int main() {
	for (int i = 1; i <= 8; i++) {
		scanf("%d", &n);
		v.push_back(make_pair(n, i));
	}
	sort(v.begin(), v.end());
	/*for (int i = 0; i < 8; i++) {
		printf("%d\n", v[i].first);
	}*/
	int sum = 0;
	for (int i = 5; i >= 1; i--) {
		sum += v[8 - i].first;
		arr[5 - i] = v[8 - i].second;
	}
	printf("%d\n", sum);
	sort(arr, arr + 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}