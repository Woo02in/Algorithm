//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<vector>
//using namespace std;
//
//struct rule {
//	int num;
//	int origin;
//	int order;
//};
//
//int N;
//vector<rule> a;
//
//bool compare_num(rule a, rule b) {
//	return a.num < b.num;
//}
//bool compare_origin(rule a, rule b) {
//	return a.origin < b.origin;
//}
//bool compare_order(rule a, rule b) {
//	return a.order < b.order;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int x;
//		cin >> x;
//		a.push_back({ x,i,0 });		
//	}
//	sort(a.begin(), a.end(), compare_num);
//	for (int i = 0; i < a.size(); i++) {
//		a[i].order = i;
//	}
//	sort(a.begin(), a.end(), compare_origin);
//
//	for (int i = 0; i < a.size(); i++) {
//		cout << a[i].order << " ";
//	}
//	return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int main()
{	
	
	cin >> N;

	vector<pair<int, int>> v;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		v.push_back({ a, i });
	}

	sort(v.begin(), v.end());

	vector<int> p(N);
	for (int i = 0; i < N; i++)
		p[v[i].second] = i;

	for (int i = 0; i < p.size(); i++) {
		cout << p[i] << " ";
	}		

}
