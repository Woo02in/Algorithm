#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a, b, c, d, A, B, C, D;
	cin >> a >> b >> c >> d >> A >> B >> C >> D;
	int sum_S = a + b + c + d;
	int sum_M = A + B + C + D;
	int Max = max(sum_S, sum_M);
	printf("%d", Max);

	return 0;
}