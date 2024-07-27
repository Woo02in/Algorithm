
#define MAX 10000
#define MIN -10000
#include<stdio.h>
#include<math.h>

int main()
{
	int Test;
	scanf("%d\n", &Test);
	for (int i = 0; i < Test; i++) {
		int x_1, x_2, y_1, y_2, r_1, r_2,result;
		scanf("%d %d %d %d %d %d", &x_1, &y_1, &r_1, &x_2, &y_2, &r_2);
		double standard;
		if (MIN <= x_1 <= MAX && MIN <= y_1 <= MAX && MIN <= x_2 <= MAX && MIN <= y_2 <= MAX && r_1 <= MAX && r_2 <= MAX) {
			standard = sqrt(pow(x_1 - x_2, 2) + pow(y_1 - y_2, 2));
			if (standard == 0) {
				if (r_1 == r_2) result = -1;
				else result = 0;
			}
			else {
				if (standard < r_1 + r_2) {
					if (abs(r_1 - r_2) == standard) result = 1;
					else if (abs(r_1 - r_2) > standard) result = 0;
					else result = 2;
				}
				else if (standard > r_1 + r_2) result = 0;
				else result = 1;
			}
			printf("%d\n", result);
		}
		else 
			return 0;
	}
	
	return 0;
}