#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<limits>

using namespace std;

int main(){
    int cnt = 1;
    vector<pair<int,string>> answer;
    while(true){
        int N;
        cin>>N;
        if(N == 0) break;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        vector<string> v;
        for(int i =0;i<N; i++){
            char s[61];
            cin.getline(s, 61, '\n');
            v.push_back(string(s));
        }
        int vis[101] = {0,};
        for(int i = 0; i < 2*N-1; i++){
            int a;
            char b;
            cin>>a>>b;
            vis[a]++;
        }
        for(int i =0;i<N; i++){
            if(vis[i+1] == 1){
                answer.push_back({cnt, v[i]});
            }
        }
        cnt++;
        v.clear();
    }

    for(int i =0;i<answer.size(); i++){
        cout<<answer[i].first<<" "<<answer[i].second<<'\n';
    }

    
    return 0;
}