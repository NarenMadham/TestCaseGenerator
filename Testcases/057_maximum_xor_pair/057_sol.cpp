#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;



class Node {
public:
	Node * left, *right;
	Node() {this->left = NULL; this->right = NULL;}
};

bool cb(int i, int j) {
	return ((i >> j) & 1) == 1;
}

void insertNode(Node * root, int x) {
	Node * curr = root;
	for (int i = 31; i >= 0; i--) {
		if (cb(x, i)) {
			if (!curr->right) {
				Node * node = new Node();
				curr->right = node;
			}
			curr = curr->right;
		} else {
			if (!curr->left) {
				Node * node = new Node();
				curr->left = node;
			}
			curr = curr->left;
		}
	}
}

ll queryNode(Node * root, int x) {
	Node * curr = root;
	ll ans = 0;
	for (int i = 31; i >= 0; i--) {
		if (cb(x, i)) {
			if (root->left) {
				ans += 1 << i;
				root = root->left;
			} else {
				root = root->right;
			}
		} else {
			if (root->right) {
				ans += 1 << i;
				root = root->right;
			} else {
				root = root->left;
			}
		}
	}
	return ans;
}

int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi ar(n); FOR(i, n) cin >> ar[i];
		Node * root = new Node();
		FOR(i, n) {insertNode(root, ar[i]);}
		ll res = 0;
		FOR(i, n) res = max(res, queryNode(root, ar[i]));
		cout << res << endl;
	}


	return 0;
}

