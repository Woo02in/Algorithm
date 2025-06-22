#include<iostream>
#include<cmath>

using namespace std;

int d1, d2;
double answer;

int main(){
    cin>>d1>>d2;
    answer += 2* d1 + 2*3.141592*d2;
    
    cout.precision(9);
    cout<<answer<<endl;
    return 0;
}