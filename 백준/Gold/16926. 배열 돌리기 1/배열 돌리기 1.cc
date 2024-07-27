#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int N, M, R;
int matrix[301][301];
int copy_matrix[301][301];
int vis[301][301];
void change(int sx,int sy, int fx, int fy) {
	int x = sx, y = sy;
	while (!vis[x][y]) {
		vis[x][y] = true;
		if (x == sx && y!=fy) {
			copy_matrix[x][y] = matrix[x][y + 1];
			y++;
		}
		else if (x == fx && y!=sy) {
			copy_matrix[x][y] = matrix[x][y - 1];
			y--;
		}
		else if (y == sy && x != sx) {
			copy_matrix[x][y] = matrix[x - 1][y];
			x--;
		}
		else if (y == fy && x!=fx) {
			copy_matrix[x][y] = matrix[x + 1][y];
			x++;
		}
	}
}
int main() {
	cin >> N >> M >> R;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> matrix[i][j];
		}
	}
	int rep = min(N, M) / 2;	
	
	while(R--){
		int n = N, m = M;
		for(int i =0;i<rep;i++){
			change(i, i, n-1, m-1);			
			n--;
			m--;
		}
		//copy(begin(copy_matrix), end(copy_matrix), begin(matrix));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				matrix[i][j] = copy_matrix[i][j];
				vis[i][j] = 0;
			}
		}
		//cout << R << endl;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << '\n';
	}
	
	return 0;
}