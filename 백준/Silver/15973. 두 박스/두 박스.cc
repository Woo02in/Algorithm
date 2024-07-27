#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

using namespace std;

int main() {
	int x_1, x_2, y_1, y_2;
	int X_1, X_2, Y_1, Y_2;
	scanf("%d %d %d %d", &x_1, &x_2, &y_1, &y_2);
	scanf("%d %d %d %d", &X_1, &X_2, &Y_1, &Y_2);

	if ((x_1 == Y_1 && x_2 == Y_2) || (y_1 == X_1 && y_2 == X_2) || (x_1 == Y_1 && y_2 == X_2) || (y_1 == X_1 && x_2 == Y_2) ) {
		printf("POINT");
	}	
	else if (X_1 == y_1) {
		if (x_2 > Y_2 || y_2 < X_2) printf("NULL");
		else printf("LINE");
	}
	else if (x_1 == Y_1) {
		if (x_2 > Y_2 || X_2 > y_2) printf("NULL");
		else printf("LINE");
	}
	else if (X_2 == y_2) {
		if (x_1 > Y_1 || y_1 < X_1) printf("NULL");
		else printf("LINE");		
	}
	else if (x_2 == Y_2) {
		if (x_1 > Y_1 || y_1 < X_1) printf("NULL");		
		else printf("LINE");
	}
	else if ((x_1 <= X_1 && x_2 < Y_2) || (x_1 >= X_1 && Y_1 > x_1 && x_2 < Y_2)) {
		if (X_1 > y_1 || X_2> y_2) printf("NULL");
		else printf("FACE");
	}
	
	else printf("NULL");

	return 0;
}
 