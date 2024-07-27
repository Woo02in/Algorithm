#include<stdio.h>

typedef long long lld;
int main(){
    int N;
    lld DP[91] ={0,};
    scanf("%d", &N);
    DP[0]= 0;
    DP[1] =1;
    DP[2] =1;
    for(int i =3; i<=90; i++){
        DP[i] = DP[i-2]+ DP[i-1];
    }
    printf("%lld", DP[N]);
    
    return 0;
}