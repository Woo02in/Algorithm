#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int T;
int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
        int sSize = s.size();

        if (s[sSize - 1] == 'a') {
            s += "s";
        }
        else if (s[sSize - 1] == 'i' || s[sSize - 1] == 'y') {
            s[sSize - 1] = 'i';
            s += "os";
        }
        else if (s[sSize - 1] == 'l') {
            s += "es";
        }
        else if (s[sSize - 1] == 'n') {
            s[sSize - 1] = 'a';
            s += "nes";
        }
        else if (s[sSize - 1] == 'e' && s[sSize - 2] == 'n') {
            s[sSize - 2] = 'a';
            s[sSize - 1] = 'n';
            s += "es";
        }
        else if (s[sSize - 1] == 'o') {
            s += 's';
        }
        else if (s[sSize - 1] == 'r') {
            s += "es";
        }
        else if (s[sSize - 1] == 't') {
            s += "as";
        }
        else if (s[sSize - 1] == 'u') {
            s += "s";
        }
        else if (s[sSize - 1] == 'v') {
            s += "es";
        }
        else if (s[sSize - 1] == 'w') {
            s += "as";
        }
        else {
            s += "us";
        }
        cout << s << endl;    
	}

	return 0;
}