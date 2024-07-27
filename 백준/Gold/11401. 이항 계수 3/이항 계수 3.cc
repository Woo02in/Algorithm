#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef long long ll;
#define MOD 1000000007LL
ll fac[4000001];

ll POW(ll a, ll b)
{
	a %= MOD;
	ll res = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			res *= a;
			res %= MOD;
		}
		a *= a;
		a %= MOD;
		b /= 2;
	}
	return res % MOD;
}

int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	ll ans;
	//팩토리얼을 만든 부분
	fac[0] = fac[1] = 1;
	for (int i = 2; i <= N; i++) {
		fac[i] = (i * fac[i - 1]) % MOD;
	}
	ans = (fac[N] * POW(fac[K], MOD - 2)) % MOD;
	ans = (ans*POW(fac[N - K], MOD - 2)) % MOD;
	printf("%lld", ans);

	return 0;
}