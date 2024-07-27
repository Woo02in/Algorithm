#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

bool cmp(const string &a, const string &b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size();
}

int main() {
	int N;
	vector<string> v;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		char tmp[51];
		scanf("%s", &tmp);
		string str(tmp);
		v.push_back(str);
	}
	sort(v.begin(), v.end(), cmp);
	v.erase(unique(v.begin(), v.end()), v.end());
	for (const string &s : v) {
		printf("%s\n", s.c_str());
	}

	return 0;
}