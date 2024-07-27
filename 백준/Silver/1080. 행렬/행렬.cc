#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>

using namespace std;
int matrix[51][51];
int matrix_2[51][51];
int main() {
	int N, M, answer = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {			
			scanf("%1d", &matrix[i][j]);			
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &matrix_2[i][j]);
		}
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = 0; j < M - 2; j++) {
			if (matrix[i][j] != matrix_2[i][j]) {
				for (int k = i; k < i + 3; k++) {
					for (int m = j; m < j + 3; m++) {
						if (matrix[k][m])
							matrix[k][m] = 0;
						else
							matrix[k][m] = 1;						
					}
				}
				answer++;
			}
			else
				continue;
		}
	}
	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << matrix[i][j];
			
		}
		cout << endl;
	}*/
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (matrix[i][j] != matrix_2[i][j]) {
				cout << -1;
				return 0;
			}
		}
	}
	cout << answer;
	return 0;
}