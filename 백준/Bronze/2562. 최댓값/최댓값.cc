
#include<stdio.h>

using namespace std;

int main() {
	int N[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &N[i]);
	}
	int max = 0;
	for (int i = 0; i < 9; i++){
		if (max < N[i]) {
			max = N[i];
		}
	}
	printf("%d ", max);
	for (int i = 0; i < 9; i++) {
		if (max == N[i]) {
			printf("%d", i + 1);
			break;
		}
	}

	return 0;
}