#include<iostream>
 
using namespace std;
 
int main(void){
    int A,B;
    cin>>A>>B;
 
    bool check[100002];
    fill_n(check,100002,true);
    check[1]=false; 
    check[0]=false;
    int arr[100002]={0};
    int result=0;
 
    for(int i=2;i<=100000;i++){
        if(check[i]){ 
            for(int j=i*2;j<=B;j+=i){ 
                check[j]=false; 
                int curNum=j;
                while(curNum%i==0){
                    curNum/=i;
                    arr[j]++;
                } 
            }
        }
    }
    for(int i=A;i<=B;i++){
        if(check[arr[i]]) result++;
    }
    cout<<result<<endl;
}
