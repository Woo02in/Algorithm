#include <string>
#include <vector>
#include<iostream>
#include<cmath>

using namespace std;

int solution(int a, int b) {
    
    int cnt = 2*a*b;
    string s = to_string(b);
    int size = s.size();
    int cnt_2 = a*pow(10,size)+ b;    
    int answer = 0;
    
    if(cnt > cnt_2) return cnt;
    else return cnt_2;    
}