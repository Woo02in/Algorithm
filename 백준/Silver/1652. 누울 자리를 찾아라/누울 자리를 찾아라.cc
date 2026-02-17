#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int map[101][101];
int main(){
    int N;
    cin >> N;

	char k;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> k;
			if (k == '.') map[i][j] = 1;
			else map[i][j] = 0;
		}
	}
    int col = 0, raw = 0;
    for(int i =0;i<N; i++){
        int count =0;
        for(int j =0; j<N; j++){
            if(map[i][j] == 1) count++;
            else count = 0;

            if(count == 2){
                raw++;
            }
        }
        
    }
    for(int i =0;i<N; i++){
        int count =0;
        for(int j =0; j<N; j++){
            if(map[j][i] == 1) count++;
            else count = 0
            ;
            if(count ==2){
                col++;
            }
        }
    }
    cout<<raw<<" "<<col<<endl;

    return 0;
}