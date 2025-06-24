#include<iostream>

using namespace std;
int T;

int gcd(int a, int b) {
    while(1){
        if(a<b){
            swap(a,b);
        }
        int r = a%b;
        if(r == 0){
            return b;
        }
        a = b;
        b = r;
    }
}
int main(){
    cin>>T;
    while(T--){
        int t;
        int arr[101] = {0,};
        long long answer =0;
        cin>>t;
        for(int i =0;i<t; i++){
            cin>>arr[i];
        } 
        for(int i =0; i < t-1; i++){
            for(int j = i+1; j<t; j++){
                int a =arr[i], b = arr[j];
                answer += gcd(a,b);

            }
        }
        cout<<answer<<'\n';
    }


    return 0;
}