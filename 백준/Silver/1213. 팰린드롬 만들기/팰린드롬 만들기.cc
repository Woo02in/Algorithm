#include <iostream>
#include <vector>

using namespace std;

const int ALPHA_NUM = 26;

string palindrom(vector<int> freq){
    int oddIndex = -1;//개수가 홀수인 알파벳의 인덱스
    string result = "";

    //펠린드롬 앞부분 만들기
    for(int i=0; i<ALPHA_NUM; i++){
        if(freq[i] % 2 != 0){//i번째 알파벳의 개수가 홀수인데
            if(oddIndex != -1){//이미 개수가 홀수인 알파벳이 존재한다면
                return "I'm Sorry Hansoo";//실패
            }
            oddIndex = i;//아니면 i번째 알파벳 저장
        }
        for(int j=0; j<freq[i]/2; j++){//i번째 알파벳을 절반 개수만큼 추가
            result += i + 'A';
        }
    }

    if(oddIndex != -1){//개수가 홀수인 알파벳이 존재한다면
        result += oddIndex + 'A';//추가
    }

    //펠린드롬 뒷부분 만들기
    for(int i=ALPHA_NUM-1; i>=0; i--){//Z부터 거꾸로 순회하면서
        for(int j=0; j<freq[i]/2; j++){//알파벳을 절반 개수만큼 추가
            result += i + 'A';
        }
    }
    
    return result;
}

int main(){

    vector<int> freq(26, 0); //각 알파벳의 빈도수

    string input;

    cin >> input;

    //각 알파벳의 빈도수 카운트
    for(int i=0; i<input.size(); i++){
        freq[input[i]-'A']++;
    }

    cout << palindrom(freq);
    
    return 0;
}