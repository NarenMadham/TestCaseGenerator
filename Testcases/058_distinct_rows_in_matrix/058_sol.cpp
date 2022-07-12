#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;


class Node {
public:
	int count;
	Node * left, *right;
	Node() {
		this->count = 0;
		this->left = NULL; this->right = NULL;
	}
};

bool insertNode(Node * root, string x) {
	bool f = false;
	Node * curr = root;
	FOR(i, x.length()) {
		if (x[i] == '0') {
			if (!curr->left) {
				Node * node = new Node();
				curr->left = node;
				f = true;
			}
			curr = curr->left;
		} else {
			if (!curr->right) {
				Node * node = new Node();
				curr->right = node;
				f = true;
			}
			curr = curr->right;
		}
	}
	return f;
}




int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vstr ar(n);
		FOR(i, n) cin >> ar[i];
		Node * root = new Node();
		ll res = 0;
		FOR(i, n) {if (insertNode(root, ar[i])) res++;}
		cout << res << endl;
	}


	return 0;
}

