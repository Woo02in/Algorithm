#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;
struct node {
	char left;
	char right;
};

int N;
vector<node> v(27);

void preorder(char Node) {
	if (Node == '.')return;
	cout << Node;
	preorder(v[Node].left);
	preorder(v[Node].right);
}

void inorder(char Node) {
	if (Node == '.') return;
	inorder(v[Node].left);
	cout << Node;
	inorder(v[Node].right);
}

void postorder(char Node) {
	if (Node == '.') return;
	postorder(v[Node].left);
	postorder(v[Node].right);
	cout << Node;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		char l, m, r;
		cin >> m >> l >> r;
		v[m].left = l;
		v[m].right = r;
	}
	preorder('A');
	cout << endl;
	inorder('A');
	cout << endl;
	postorder('A');
	cout << endl;
	return 0;
}

