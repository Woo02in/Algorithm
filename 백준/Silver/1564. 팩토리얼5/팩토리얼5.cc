#include<iostream>
#include<stdio.h>

using namespace std;

long long int N, num;
const long long int MOD = 1e12;
void f()
{
    while (num % 10 == 0) {
        num /= 10;
    }
}
int main()
{
    cin >> N;
    num = 1;
    for (long long int i = 1; i <= N; i++) {
        num *= i;
        f();
        num %= MOD;
    }
    printf("%05lld", num % 100000);
    
    return 0;
}