#include <iostream>
#include<algorithm>
using namespace std;
int n;
int arr[3]; 
int mn_dp[3] = { 0 }; 
int mx_dp[3] = { 0 }; 

int main() {
    cin >> n;
    int temp0; 
    int temp1; 
    int temp2; 
    for (int i = 1; i <= n; i++) {
        cin >> arr[0] >> arr[1] >> arr[2]; 
        
        temp0 = mn_dp[0]; 
        temp1 = mn_dp[1]; 
        temp2 = mn_dp[2]; 

        mn_dp[0] = min(temp0, temp1) + arr[0];
        mn_dp[2] = min(temp1, temp2) + arr[2];
        mn_dp[1] = min(min(temp0, temp1), temp2) + arr[1];
        
        temp0 = mx_dp[0];
        temp1 = mx_dp[1];
        temp2 = mx_dp[2];

        mx_dp[0] = max(temp0, temp1) + arr[0];
        mx_dp[2] = max(temp1, temp2) + arr[2];
        mx_dp[1] = max(max(temp0, temp1), temp2) + arr[1];
    }
    
    cout << max(max(mx_dp[0], mx_dp[1]), mx_dp[2]) << " " << min(min(mn_dp[0], mn_dp[1]), mn_dp[2]);
    return 0;
}
