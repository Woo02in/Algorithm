#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef long long ll;

int main() {
	ll a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	ll ans = 1;
	a %= c;
	while (b > 0) {
		if (b % 2 == 1) {
			ans *= a;
			ans %= c;
		}
		a *= a;
		a %= c;
		b /= 2;
	}
	
	printf("%lld", ans);
	return 0;
}