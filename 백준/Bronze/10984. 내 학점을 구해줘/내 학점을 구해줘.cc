#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;
double n, m;

int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		double N, P = 0, GPA = 0;
		scanf("%lf", &N);
		for (int i = 0; i < N; i++) {
			scanf("%lf %lf", &n, &m);
			P += n;
			GPA += n * m;
		}
		printf("%.0lf %.1lf\n", P, GPA / P);
	}

	return 0;
}