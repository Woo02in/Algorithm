#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
	double A;
	scanf("%lf", &A);
	printf("%.0lf", pow((pow(2, A)+1),2));
		
	
	return 0;
}