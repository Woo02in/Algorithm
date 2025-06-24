#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int prime[1000001];
vector<int> v;

void check(){
    for(int i =2; i*i<=1000000; i++){
        if(!prime[i]){
            for(int j=i*i; j<=1000000; j+=i){
                prime[j] = 1;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    check();
    while(true){
        int cnt =0;
        cin>>cnt;
        if(cnt == 0){
            break;
        }
        for(int i =3; i < cnt; i+=2){
            if(prime[i] == 0 && prime[cnt-i] ==0){
                cout<<cnt<<" = "<<i<<" + "<< cnt-i << '\n';
                break;
            }
        }
    }
    return 0;
}