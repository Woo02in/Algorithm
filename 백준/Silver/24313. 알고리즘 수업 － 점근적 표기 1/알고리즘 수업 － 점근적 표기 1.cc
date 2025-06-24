#include<iostream>

using namespace std;

int main(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if(a*n+b <= c*n && a<=c){
        cout<<1<<endl;
    }
    else cout<<0<<endl;

    return 0;
}