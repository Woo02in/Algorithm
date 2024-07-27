#include<stdio.h>
int main() {
	double LastBlock;
	scanf("%lf", &LastBlock);
	if (LastBlock >= 1 && LastBlock <= 1000000000) {
		printf("%0.0lf\n", 4 * LastBlock);
	}
	


	return 0;
}