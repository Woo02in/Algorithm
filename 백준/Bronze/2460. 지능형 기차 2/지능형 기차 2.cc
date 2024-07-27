#include<stdio.h>

int main() {
	int tmp = 0, in = 0, out = 0, ans = 0, sum[11] = {0,};
	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &out, &in);
		ans += in; 
		ans -= out;
		sum[i+1] = ans;
		if (tmp <= sum[i + 1]) {
			tmp = sum[i + 1];
		}
	}
	printf("%d\n", tmp);
	return 0;
}