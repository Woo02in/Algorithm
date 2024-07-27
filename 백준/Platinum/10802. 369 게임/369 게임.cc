#include <iostream>
#include <string>
#define NMAX 100010
#define MOD 20150523

using namespace std;

string A, B;

long long num369[NMAX][10], tot369[NMAX];
long long mul3[NMAX][10][3], tot3[NMAX][3];

long long cntA, cntB;

// 거듭제곱
long long pow(long long val, int k) {
    if (k == 0) return 1;
    else if (k == 1) return val;
    else {
        if (k % 2 == 0) return pow((val * val) % MOD, k / 2);
        else return (val * pow(val * val % MOD, k / 2)) % MOD;
    }
}

// 박수 횟수 구하기
long long get(string num) {
    long long ret, len;

    ret = 0;
    len = num.length();

    for (int idx = 0, l = len; idx < len; idx++, l--) {

        if (num[idx] > '0') ret = (ret + tot369[l - 1] % MOD);
        int t = num[idx] - '0';
        for (int j = 1; j < t; j++) ret = (ret + num369[l][j]) % MOD;
   
        if (num[idx] == '3' or num[idx] == '6' or num[idx] == '9') {            
            ret++;            
            long long t = 0;
            for (int nxt = idx + 1; nxt < len; nxt++) t = (t * 10 + (num[nxt] - '0')) % MOD;

            ret = (ret + t) % MOD;            
            break;
        }
    }

    int before = 0;
    for (int idx = 0, l = len; idx < len; idx++, l--) {               
        int m = (3 - before) % 3;

        if (num[idx] == '0') {
            if (m == 0 and idx + 1 == len) ret++;
            else continue;
        }

        else {                        
            ret = (ret + tot3[l - 1][m]) % MOD;
            int t = num[idx] - '0';
            if (idx + 1 == len) t++;

            for (int j = 1; j < t; j++) ret = (ret + mul3[l][j][m]) % MOD;

            before = (before + t) % 3;
            if (num[idx] == '3' or num[idx] == '6' or num[idx] == '9') break;
        }
    }

    return ret;
}

int check(string num) {
    int f, tmp;

    f = tmp = 0;
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '3' or num[i] == '6' or num[i] == '9') {
            f = 1;
            break;
        }
        else tmp += (num[i] - '0');
    }

    if (f or tmp % 3 == 0) return 1;
    else return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> A >> B;

    tot369[1] = 3;
    num369[1][3] = num369[1][6] = num369[1][9] = 1;
    for (int idx = 2; idx <= B.length(); idx++) {
        for (int j = 0; j <= 9; j++) {
            if (j > 0 and j % 3 == 0) num369[idx][j] = pow(10, idx - 1);
            else num369[idx][j] = tot369[idx - 1];

            tot369[idx] = (tot369[idx] + num369[idx][j]) % MOD;
        }
    }
    tot3[0][0] = 1;
    for (int idx = 1; idx <= B.length(); idx++) {
        if (idx == 1) {
            for (int j = 0; j <= 9; j++) {
                if (j > 0 and j % 3 == 0) continue;
                else {
                    mul3[idx][j][j % 3]++;
                    tot3[idx][j % 3]++;
                }
            }
        }

        else {     
            for (int k = 0; k < 3; k++) tot3[idx][k] = 0;

            for (int j = 0; j <= 9; j++) {              
                if (j > 0 and j % 3 == 0) continue;

                for (int k = 0; k < 3; k++) {
                    mul3[idx][j][k] = tot3[idx - 1][(k - j + 12) % 3];

                    tot3[idx][k] = (tot3[idx][k] + mul3[idx][j][k]) % MOD;
                }

            }
        }
    }    
    cntA = (get(A) - check(A) + MOD) % MOD;
    cntB = (get(B) + MOD) % MOD;


    cout << (cntB - cntA + MOD) % MOD;

}