#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    if(!(number % n) && !(number % m)) return 1;
    else return 0;
    
}