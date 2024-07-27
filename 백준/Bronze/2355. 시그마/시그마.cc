#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;

int main() {
	long long a,b;
	long long ans = 0;
	scanf("%lld %lld", &a, &b);
	if (a > b) {
		ans = (a *(a + 1)) / 2 - ((b - 1)*b) / 2;
		}
	
	else {
		ans = (b *(b + 1)) / 2 - ((a - 1)*a) / 2;
		}
	
	printf("%lld", ans);
	return 0;
}