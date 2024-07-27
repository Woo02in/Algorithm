#include <stdio.h>
int main(){
    int n,arr[1001],con=0,num,k=0; 
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i] == 1)
            continue;
        else{
            num = arr[i];
            while(num>0){
                if(arr[i]%num == 0)
                    k++;
                num--;
            }
        }
        if(k == 2)
            con++; 
        k = 0; 
    }
    printf("%d",con);
    return 0;
}