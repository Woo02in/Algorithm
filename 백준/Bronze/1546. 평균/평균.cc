#include<stdio.h>
int main()
{
	int N; 
	double MAX=0.0; 
	scanf("%d",&N); 
	double A[N]; 
	double sum=0.0; 
	for(int i=0;i<N;i++) scanf("%lf",&A[i]); 
	for(int i=0;i<N;i++)
	{
		if(A[i]>MAX) MAX = A[i]; 
	}
	for(int i=0;i<N;i++)
	{
		sum = sum + ((A[i]/MAX)*100.0);
	}
	printf("%0.2lf",sum/N);
}