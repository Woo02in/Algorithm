//15232
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int R, C;
//	cin >> R >> C;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cout << '*';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//24262
//#include<iostream>
//
//using namespace std;
//
//
//int MenOfPassion(int n) {
//	int i = n / 2;
//	return i;
//}
//
//int main() {
//	int n, answer = 0;
//	cin >> n;
//	while (n != 0) {
//		n = MenOfPassion(n);
//		answer++;
//	}
//	cout << answer << endl << 0;
//	return 0;
//}

//24309
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	int cnt = b - c;
//	cnt /= a;
//
//	
//	cout << cnt;
//		
//
//	return 0;
//}

//24568
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int R, S;
//	cin >> R >> S;
//	int total = 0;
//	total = R * 8 + S * 3;
//	cout << total - 28 << endl;
//
//	return 0;
//}

//24736
#include<iostream>

using namespace std;

int main() {
	int t, f, s, p, c, a1 = 0, a2 = 0;
	for (int i = 0; i < 2; i++) {
		cin >> t >> f >> s >> p >> c;
		cout << t * 6 + f * 3 + s * 2 + p + c * 2 << " ";
	}

	return 0;
}