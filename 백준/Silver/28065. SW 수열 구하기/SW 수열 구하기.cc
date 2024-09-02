#include <iostream>
using namespace std;
int num, N;
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    num = 1;
    for (int i = 1; i <= N; i++)
    {
        cout << num << ' ';
        if (i % 2 == 1) num += N - i;
        else num -= N - i;
    }
}