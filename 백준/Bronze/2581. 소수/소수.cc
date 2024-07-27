#include<stdio.h>

bool arr[10001];

int main() {
	arr[1] = 1;
	arr[0] = 1;
	int N, M;
	int sum = 0;
	scanf("%d %d", &N, &M);
	for (int i = 2; i < 10001; i++) {
		if (!arr[i]) { // 소수를 찾는 곳
			for (int j = i * 2; j < 10001; j += i) { // 소수를 지우는 곳
				arr[j] = true; // true : 합성수 , false : 소수  
			}
		}
	}
	int min =0;
	for (int i = N; i <= M; i++) {
		if (!arr[i]){
			if(min == 0)
				min = i;
			sum += i;
		}
	}
	if (sum == 0) {
		printf("-1");
	}
	else printf("%d\n%d", sum,min);

	return 0;
}