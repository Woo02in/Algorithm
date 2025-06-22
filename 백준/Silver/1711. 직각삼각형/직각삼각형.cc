#include<iostream>
#include<cmath>
#include<vector>
#include<utility>
typedef long long ll;
using namespace std;

int T, answer;
int x[1500], y[1500];

ll distance(int i, int j ){
    ll distX = x[i] - x[j];
    ll distY = y[i] - y[j];
    return distX*distX +distY*distY;
}

int main(){
    cin>>T;
    for(int i =0;i<T; i++){
        cin>> x[i] >> y[i];
    }
    
    for(int i =0;i<T -2; i++){
        for(int j =i+1;j<T-1; j++){
            for(int k = j+1; k<T; k++){
                ll a = distance(i,j);
                ll b = distance(i,k);
                ll c = distance(j,k);

                if(a>c){
                    swap(a,c);
                }
                if(b>c){
                    swap(b,c);
                }
                if(a+b == c){
                    answer++;
                }
            }
        }
    }
    cout<<answer<<'\n';
    return 0;
}