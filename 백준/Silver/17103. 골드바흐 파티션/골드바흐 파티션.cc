#include<iostream>
#include<cmath>

using namespace std;

int prime[1000001], T;
int num[101];
void check(){
    for(int i =2;i*i<=1000000; i++){
        if(!prime[i]){
            for(int j =i*2; j<=1000000; j+=i){
                prime[j] = 1;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    check();
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>num[i];
    }
    for(int i =0;i<T; i++){
        int cnt = 0;
        for(int j =2; j<=num[i]/2; j++){
            if(!prime[j] && !prime[num[i]-j]){
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }

    return 0;
}