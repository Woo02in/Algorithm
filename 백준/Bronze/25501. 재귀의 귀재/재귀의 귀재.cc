#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int cnt = 0;

int recursion(string& s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(string& s) {
    return recursion(s, 0, s.length() - 1);
}

int main() {
    int N;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cnt = 0;
        string S;
        cin >> S;
        cout << isPalindrome(S) << " ";
        cout << cnt << endl;
    }

    return 0;
}