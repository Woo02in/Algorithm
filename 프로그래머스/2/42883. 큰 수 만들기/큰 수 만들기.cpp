#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int size = number.size() - k; 
    char max = 0; 
    int start = 0;
    for(int i = 0;i<size; i++){ //0,1
        max = number[start]; //1
        int idx = start; // 3
        for(int j =start; j<= i+k; j++){ // 
            if(max < number[j]){
                max = number[j]; //2,3//2,3,4
                idx = j; //1,2//4,3
            }
        }
        start = idx + 1; //3
        answer += max; //3
    }
    
    return answer;
}