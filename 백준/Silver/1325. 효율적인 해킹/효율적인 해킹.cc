#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;


int N, M;


int main(){
    cin>>N>>M;
    vector<vector<int>> v(N+1);
    for(int i = 0; i<M; i++){
        int a,b;
        cin>>a>>b;
        v[b].push_back(a);
    }
    vector<int> result(N+1, 0);
    int max_value = 0;
    for(int i = 1; i<=N; i++){
        vector<bool> visited(N+1, false);
        queue<int> q;
        q.push(i);
        visited[i] = true;
        int cnt =0;
        while(!q.empty()){
            int now = q.front();
            q.pop();
            cnt++;
            for(int next : v[now]){
                if(visited[next]) continue;
                visited[next] = true;
                q.push(next);    
            }
        }
        result[i] = cnt;
        max_value = max(max_value, result[i]);
    }

    for(int i = 1; i<=N; i++){
        if(result[i] == max_value){
            cout<<i<<" ";
        }
    }
    return 0;
}