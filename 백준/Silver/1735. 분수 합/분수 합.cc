#include<iostream>

using namespace std;

int gcd(int n1,int n2){
    int max = n1;
    int min = n2;
    if(n2>n1){
        max = n2;
        min = n1;
    }
    if(n1%n2 == 0) return n2;
    else return gcd(n2,n1%n2);
}


int main(){
    
    int a,b;
    int c,d;
    
    int bunja, bunmo;
    cin >> a >> b;
    cin >> c >> d;
    
    bunja = a*d+b*c;
    bunmo = b*d;
    
    int div = gcd(bunja,bunmo);
    
    bunja /= div;
    bunmo /= div;
    
    cout << bunja << " " << bunmo << '\n';
}