#include<iostream>
#include<cmath>

using namespace std;
int N,M,answer;
 
int main(){
    cin>>N>>M;
    if(N>M){
        answer = (M-1)*(M-1);
    }
    else if(M>N){
        answer = (N-1)*(N-1);        
    }
    else{
        answer = pow((N-2),2)+1;
    }
    cout<<answer<<endl;
    return 0;
}