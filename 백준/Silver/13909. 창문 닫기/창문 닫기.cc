#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int N;
vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>N;
    int answer = 0;
    for(int i = 1; i*i<=N; i++){
        answer++;
    }
    cout<<answer<<'\n';
    return 0;
}