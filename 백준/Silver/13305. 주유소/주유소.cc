//// 3733 
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int N, S;
//int main() {
//	while ((scanf("%d %d", &N, &S)) != EOF){
//		printf("%d\n", S / (N + 1));
//	}
//	return 0;
//}

////4101
//#include<iostream>
//
//using namespace std;
//
//int check(int x, int y) {
//	return x > y ? 1 : 0;
//}
//int main() {
//	int a, b;	
//	while (true) {
//		cin >> a >> b;
//		if (a == 0 && b == 0) {
//			break;
//		}
//		if (check(a, b)) {
//			cout << "Yes" << endl;
//		}
//		else
//			cout << "No"<< endl;
//	}
//	return 0;
//}

////5341
//#include<iostream>
//using namespace std;
//int main() {
//	int N;
//	while (true) {
//		cin >> N;
//		int answer = 0;
//		if (N == 0)
//			break;
//		for (int i = 1; i <= N; i++) {
//			answer += i;
//		}
//		cout << answer << endl;
//	}
//
//	return 0;
//}

////6840
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int a[3];
//	for (int i = 0; i < 3; i++) {
//		cin >> a[i];
//	}
//	sort(a, a + 3);
//	cout << a[1];
//	return 0;
//}

////7891
//#include<iostream>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	while (N--) {
//		long long a, b;
//		cin >> a >> b;
//		cout << a + b << endl;
//	}
//
//	return 0;
//}

////8370
//#include<iostream>
//using namespace std;
//
//int main() {
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	cout << a *b + c *d << endl;
//
//	return 0;
//}

////8437
//#include<iostream>
//using namespace std;
//
//int main() {
//	long long a = 0, b = 0;
//	long long ans, ans_2;
//	cin >> a >> b;
//	if (a > b) {
//		ans = a / 2 - b / 2;
//		ans_2 = a - ans;
//	}
//	else {
//		ans = b / 2 - a / 2;
//		ans_2 = a - ans;
//	}
//	cout << ans_2 << endl << ans << endl;
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main() {
//	string s;
//	cin >> s;
//	reverse(s.begin(), s.end());
//	cout << s;
//	return 0;
//}

////8871
//#include<iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	cout << (n + 1) * 2 <<" "<<(n + 1) * 3 << endl;
//
//	return 0;
//}

////10189
//#include<iostream>
//using namespace std;
//
//int main() {
//	cout << "#  # #### #### #  #" << endl;
//	cout << "#### #  # #  # # #" << endl;
//	cout << "#### #  # #  # # #" << endl;
//	cout << "#  # #### #### #  #" << endl;
//
//	return 0;
//}

////14581
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string s;
//	cin >> s;
//	cout << ":fan::fan::fan:" << endl;
//	cout << ":fan::"<<s<<"::fan:" << endl;
//	cout << ":fan::fan::fan:" << endl;
//	
//	return 0;
//}

////1312
//#include<iostream>
//
//using namespace std;
//int main() {
//	int A, B, N;
//	int ans = 0;
//	cin >> A >> B >> N;	
//		if (A % B == 0) {
//			cout << 0;
//			return 0;
//		}
//		if (A >= B)
//			A %= B;
//		for (int i = 0; i < N; i++) {
//			A *= 10;
//			ans = (int)(A / B);
//			A = A % B;
//		}
//		cout << ans;
//	return 0;
//}

////17256
//#include<iostream>
//
//using namespace std;
//int ax, ay, az, cx, cy, cz, bx, by, bz;
//int main(){
//	cin >> ax >> ay >> az >> cx >> cy >> cz;
//	bx = cx - az;
//	by = cy / ay;
//	bz = cz - ax;
//	cout << bx << " " << by << " " << bz;
//	return 0;
//}

////18301
//#include<iostream>
//using namespace std;
//
//int main() {
//	int n1, n2, n12;
//	cin >> n1 >> n2 >> n12;
//	cout << (n1 + 1) * (n2 + 1) / (n12+1) - 1;
//	return 0;
//}

//18409
//#include<iostream>
//using namespace std;
//int main() {
//	int n, cnt = 0;
//	char x;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		if (x == 'a' || x == 'i' || x == 'u' || x == 'e' || x == 'o')
//			cnt++;
//	}
//	cout << cnt;
//	return 0;
//}

////20254
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	cout << a * 56 + b * 24 + c * 14 + d * 6;
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//int main() {
//	int a, b, c, d, e, f;
//	cin >> a >> b >> c >> d >> e >> f;
//	cout << (a + b + c + d + e + f) * 5;
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<cstring>
//
//using namespace std;
//int main() {
//	string str1 = "abc";
//	string str2 = "aabcc";
//	int found = str2.find(str1);
//	
//	cout << found;
//	//cout << found;
//
//	return 0;
//}

//13305

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	long long current = 0;
	long long answer = 0;
	int city = 0, distance[100001] = { 0, }, cost[100001] = { 0, };
	cin >> city;
	for (int i = 0; i < city - 1; i++) {
		cin >> distance[i];
	}
	for (int i = 0; i < city; i++) {
		cin >> cost[i];
	}
	current = cost[0];
	answer = current * distance[0];
	for (int i = 1; i < city - 1; i++) {
		if (current < cost[i]) {
			answer += current * distance[i];
		}
		else {
			current = cost[i];
			answer += current * distance[i];
		}
	}
	cout << answer;
	return 0;
}