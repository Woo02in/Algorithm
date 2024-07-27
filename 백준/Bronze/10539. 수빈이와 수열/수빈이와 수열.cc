#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
using namespace std;

vector<int>subin;
vector<int>ans;
int n;
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		subin.push_back(n);
	}
	ans.push_back(subin[0]);
	int sum = subin[0];
	for (int i = 1; i < N; i++) {
		ans.push_back(subin[i] * (i+1) - sum);
		sum += ans[i];
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", ans[i]);
	}
	return 0;
}