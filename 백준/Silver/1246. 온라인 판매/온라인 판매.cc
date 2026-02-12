#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;

int main(){
    int N, M;
    cin>>N>>M;

    for(int i = 0; i<M; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int answer = 0;
    int price = 0;
    for(int i =0;i<M; i++){
        if(N<(M-i)){
            if(answer <v[i]*N){
                answer = v[i]*N;
                price = v[i];
            }
            
        }
        else{
              if(answer <v[i]*(M-i)){
                answer = v[i]*(M-i);
                price = v[i];
            }
        }
    }

    cout<<price <<" " <<answer<<'\n';
    return 0;
}