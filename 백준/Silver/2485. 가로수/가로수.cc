#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

typedef long long ll;

using namespace std;

int T;
ll answer;
vector<ll> v;

int gcb(int a, int b){
    while(true){
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
    ll arr[100001];
    for(int i =0;i<T; i++){
        cin>>arr[i];
        if(i != 0){
            v.push_back(arr[i]-arr[i-1]);
        }
    }
    ll gap = 987654321;
    for(int i =1;i<v.size(); i++){
        ll cnt = gcb(v[0], v[i]); 
        gap = min(gap, cnt);    
    }
    answer = ((arr[T-1] - arr[0]) / gap) - (T-1);

    cout<<answer<<'\n';
    //cout<<((arr[T-1] - arr[0]) / gap);
    // for(int i =0;i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    
    return 0;
}