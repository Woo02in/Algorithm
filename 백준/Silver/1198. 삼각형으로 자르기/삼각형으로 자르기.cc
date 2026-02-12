#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

vector<pair<int,int>> tri;

int main(){
    int N;
    cin>>N;
    for(int i =0;i<N; i++){
        int x,y;
        cin>>x>>y;
        tri.push_back({x,y});
    }
    double answer = 0;

    for(int i =0;i<N-2; i++){
        for(int j = i+1; j<N-1; j++){
            for(int k = j +1; k<N; k++){
                double x1 = tri[i].first;
                double y1 = tri[i].second;
                double x2 = tri[j].first;
                double y2 = tri[j].second;
                double x3 = tri[k].first;
                double y3 = tri[k].second;

                answer = max(answer, abs((x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3) / 2));            
            }
        }
    }
    cout.setf(ios::fixed);
    cout.precision(12);
    cout<<answer<<'\n';
   

    return 0;
}