#include<stdio.h>
#include<iostream>

int main() {

	int value, sum = 0;
	scanf("%d", &value);
	value = 1000 - value;
	int v[6] = { 500,100,50,10,5,1 };
	for (int i = 0; i < 6; i++) {
		sum += value / v[i];
		if (value / v[i] >= 1) {
			value = value % v[i];
		}
	}
	printf("%d", sum);


	return 0;
}