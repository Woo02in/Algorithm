#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<stdlib.h>
using namespace std;
int N;
vector<int> num;
int op[4]; // 연산자의 개수를 저장한 배열
int Min = 1000000001;
int Max = -Min;

//  최대 최소


void Cal(int cnt, int plus, int minus, int mul, int div,int sum) {

	if (cnt == N) {
		Max = max(Max, sum);
		Min = min(Min, sum);
	}
	if (plus > 0)
		Cal(cnt+1, plus - 1, minus, mul, div, sum + num[cnt]);
	if (minus > 0)
		Cal(cnt+1, plus, minus - 1, mul, div, sum - num[cnt]);
	if (mul > 0)
		Cal(cnt+1, plus, minus, mul - 1, div, sum * num[cnt]);
	if (div > 0)
		Cal(cnt+1, plus, minus, mul, div - 1, sum / num[cnt]);



}
int main() {
	scanf("%d", &N);
	int tmp;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &tmp);
		num.push_back(tmp);
	}
	
	for (int i = 0; i < 4; i++) 
		scanf("%d", &op[i]);
	
	Cal(1, op[0], op[1], op[2], op[3], num[0]);

	printf("%d\n%d", Max, Min);

	return 0;
}