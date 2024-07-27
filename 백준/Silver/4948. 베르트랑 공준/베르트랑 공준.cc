#include<stdio.h>
#include<math.h>

int arr[246913];

int sosu(int A, int B) {
	arr[0] = 1;
	arr[1] = 1;
	int cnt = 0;
	for (int i = 2; i <= B; i++) {
		for (int j = 2; j*i <= B; j++) {
			arr[i*j] = 1;
		}
	}
	for (int i = A+1; i <= B; i++) {
		if (!arr[i]) cnt++;
	}
	return cnt;
}

int main() {
	while (true) {
		int a;
		scanf("%d", &a);
		if (a == 0) break;

		printf("%d\n", sosu(a, 2*a));
	}
	return 0;
}