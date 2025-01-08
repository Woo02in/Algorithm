#include <string>
#include <vector>
#include<algorithm>

using namespace std;

bool check(int x, int y, int size, vector<vector<string>> park){
    if (x + size > park.size() || y + size > park[0].size()) return false;
    for(int i =0;i<size; i++){
        for(int j =0;j<size; j++){    
            if(park[x+i][y+j] != "-1"){
                return false;
            }
        }
    }
    return true;
}

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    bool flag = true;
    sort(mats.begin(), mats.end());
    for(int k =mats.size()-1; k>=0; k--){
        int matsize = mats[k];
        for(int i =0;i<park.size(); i++){
            for(int j =0; j<park[i].size(); j++){
                if(park[i][j] == "-1"){
                    if(check(i,j,matsize, park)){
                        answer = matsize;
                        flag = false;                       
                        break;
                    }                    
                }
                if(!flag) break;
            }
            if(!flag) break;
        }
        if(!flag) break;
    }
    return answer;
}