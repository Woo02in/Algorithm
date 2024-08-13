#include <iostream>
#include<algorithm>
#include <cmath>
using namespace std;
int road_row[101][101];
int road_col[101][101];
int N, L;
int answer = 0;

void Pass(int road[][101]) {    
    for (int i = 0; i < N; i++) {
        bool vis[101] = { 0 }; 
        bool possible = true; 
        for (int h = 0; h < N - 1; h++) {
            if (abs(road[i][h] - road[i][h + 1]) > 1) {                
                possible = false;
                break;
            }
          
            if (road[i][h] == road[i][h + 1] + 1) {
                int cur_hight = road[i][h + 1];
                for (int k = h + 2; k < h + 1 + L; k++) {
                    if (k >= N || road[i][k] != cur_hight) {                        
                        possible = false;
                        break;
                    }
                }
                if (possible) {                    
                    vis[h + L] = true;
                }
                else {
                    break;
                }
            }           
            if (road[i][h] == road[i][h + 1] - 1) {
                int cur_hight = road[i][h];
                for (int k = h; k > h - L; k--) {
                    if (k < 0 || road[i][k] != cur_hight || vis[k]) {                        
                        possible = false;
                        break;
                    }
                }
                if (!possible) {
                    break;
                }
            }
        }
        if (possible) {
            answer++; 
        }
    }
}

int main() {
    cin >> N >> L;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> road_row[i][j]; 
            road_col[j][i] = road_row[i][j]; 
        }
    }
    Pass(road_row); 
    Pass(road_col); 
    cout << answer << endl;

    return 0;
}