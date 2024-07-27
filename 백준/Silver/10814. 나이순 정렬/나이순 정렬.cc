#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<utility>

using namespace std;

bool cmp(const pair<int,string> &a, const pair<int, string> &b)
{
    return a.first < b.first;
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    
    vector<pair<int,string>> vec(T);
    
    for(int i = 0; i < T; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    stable_sort(vec.begin(), vec.end(), cmp);
    
    for(int i = 0; i < T; i++){
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
}