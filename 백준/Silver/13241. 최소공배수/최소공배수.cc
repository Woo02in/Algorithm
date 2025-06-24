#include<iostream>

using namespace std;

long long a,b;
long long gcd;
int main(){
    cin>>a>>b;
    if(a<b){
        swap(a,b);
    }
    long long lcm = a*b;
    while(true){
        
        int r = a%b;
        if(r == 0){
            gcd = b;     
            break;
        }
        a = b;
        b = r;
    }
    long long answer = lcm / gcd;
    //cout<<lcm <<" "<<gcd<<'\n';
    cout<<answer<<endl;
    return 0;
}