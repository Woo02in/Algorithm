#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> work;
    for(int i =0;i<progresses.size(); i++){
        if((100-progresses[i])%speeds[i] == 0){
            work.push((100-progresses[i]) / speeds[i]);
        }
        else{
            work.push((100-progresses[i])/ speeds[i] +1);
        }
    }
    
    
    
    while(!work.empty()){
        int ans = 1;    
        int cnt = work.front();            
        work.pop();        
        while(!work.empty() && cnt>= work.front()){
            ans++;
            work.pop();
        }            
        answer.push_back(ans);
        
    }
    return answer;
}