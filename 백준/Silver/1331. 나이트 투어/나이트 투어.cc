#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<queue>

using namespace std;

int vis[7][7];

struct location{
    int raw;
    int col;
};

int ctoi(location l){
    if(l.raw == 'A'){
        return 1;
    }
    else if(l.raw == 'B'){
        return 2;
    }
    else if(l.raw == 'C'){
        return 3;
    }
    else if(l.raw == 'D'){
        return 4;
    }
    else if(l.raw == 'E'){
        return 5;
    }
    else if(l.raw == 'F'){
        return 6;
    }
}

bool nightcheck(location pre, location cur){
    int a = pre.raw;
    int b = pre.col;
    int c = cur.raw;
    int d = cur.col;

    if((c == a-2 && d == b+1) || (c == a-1 && d == b+2) || (c == a+1 && d == b+2) ||(c == a+2 && d == b+1) || (c == a+2 && d == b-1) || (c == a+1 && d == b-2) || (c == a-1 && d == b-2) || (c == a-2 && d == b-1)){
        return true;
    }
    else return false;
}

bool vischeck(){
    for(int i =0;i<6; i++){
        for(int j=0; j<6; j++){
            if(vis[i][j] == 0){
                return false;
            }
        }
    }
    return true;
}

queue<location> night;

int main(){
    bool nightflag = true;
    string s;
    cin>>s;
    location cur;
    location start;
    cur.raw = s[0]-64;
    cur.col = s[1]-48;
    start.raw = cur.raw;
    start.col = cur.col;
    vis[cur.raw-1][cur.col-1] = 1;
    night.push({cur.raw, cur.col});
    
    for(int i=0;i<35; i++){        
        cin >> s;
        location cur;
        cur.raw = s[0]-64;
        cur.col = s[1]-48;
        vis[cur.raw-1][cur.col-1] = 1;
        night.push({cur.raw, cur.col});    
        if(night.size() < 2){
            continue;
        }
        else{            
            location pre = night.front();
            night.pop();
            location cur = night.front();
            //cout<<pre.raw<<pre.col<< " "<<cur.raw<<cur.col<<endl;
            nightflag = nightcheck(pre, cur);
            if(i == 34){
                nightflag = nightcheck(cur, start);
            }        
            if(!nightflag) {
                cout<<"Invalid"<<'\n';
                return 0;
            }
        }
        
    }
    bool flag = vischeck();
    if(!flag) {
        cout<<"Invalid"<<'\n';
        return 0;
    }
    else cout<<"Valid"<<'\n';


    return 0;
}