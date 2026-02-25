#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;
int N;
int main(){
    cin>>N;
    for(int i =0;i<N; i++){
        int x;  
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

	int max=0;
	for(int i=0; i<N; i++) {
		int l=1;
		for(int j=i+1; j<N; j++) {
			if(v[j]-v[i]<5 && v[j]-v[i]>0) l++;
		}
		if(l>max) max=l;
	}
    // for(int i =0;i<N; i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<5-max<<'\n';
    return 0;
}