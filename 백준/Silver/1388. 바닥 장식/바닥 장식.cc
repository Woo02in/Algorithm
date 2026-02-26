#include <iostream>
#include <vector>

using namespace std;

char map[51][51];

int main() {
    int N, M;
    int answer = 0;
    
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (map[i][j] == '-') {
                if (j == 0 || map[i][j - 1] == '|') {
                    answer++;
                }
            }
        }
    }
    
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            if (map[i][j] == '|') {

                if (i == 0 || map[i - 1][j] == '-') {
                    answer++;
                }
            }
        }
    }

    cout << answer << '\n';

    return 0;
}