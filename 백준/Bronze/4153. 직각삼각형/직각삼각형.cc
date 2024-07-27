#include<stdio.h>
#include<math.h>
int main() {
	while (true) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) break;
		
		if (b*b + c * c == a * a || a * a + c * c == b * b || b * b + a * a == c * c) printf("right\n");
		else printf("wrong\n");
	}




	return 0;
}