#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int N;
vector<int> v;

int main(){
    cin>>N;
    for(int i =0;i<N; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    if(next_permutation(v.begin(), v.end())){
        for(int i =0;i<N; i++){
            cout<<v[i]<<" ";
        }
    }
    else cout<<-1;
    // do{
    //     for(auto it = v.begin(); it != v.end(); ++it)
    //         cout << *it << ' ';
    //     cout<<endl;
    // }while(next_permutation(v.begin(), v.end()));

    return 0;
}