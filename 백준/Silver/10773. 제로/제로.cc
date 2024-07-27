#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stack>

using namespace std;
int N;

int main() {
	int test;
	int sum = 0;
	stack<int> sta;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d", &N);
		if (N == 0) {
			sta.pop();
		}
		else sta.push(N);
	}
	while (!sta.empty()) {
		sum += sta.top();
		sta.pop();
	}
	printf("%d", sum);
	return 0;
}