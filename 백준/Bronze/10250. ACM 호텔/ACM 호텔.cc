#include<stdio.h>

int main() {
	int Test;
	scanf("%d", &Test);
	for (int i = 0; i < Test; i++) {
		int H, W, N;
		int bottom, room;
		scanf("%d %d %d", &H, &W, &N);
		if (N%H == 0) {
			bottom = H;
			room = N / H;
		}
		else { 
			bottom = N % H; 
			room = N / H + 1;
		}
		printf("%d\n", bottom * 100 + room);

	}
	return 0;
}