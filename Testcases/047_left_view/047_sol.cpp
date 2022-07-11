#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout
using namespace std;


class Node {
public:
	int data, depth;
	Node* left, *right;
	Node(int data) {
		this->data = data;
		this->left = NULL; this->right = NULL;
	}
};

Node * insertNode(Node * root, int x, int d) {
	if (!root) {
		Node * node = new Node(x);
		node->depth = d;
		return node;
	}
	if (x > root->data) {
		root->right = insertNode(root->right, x, d + 1);
	} else {
		root->left = insertNode(root->left, x, d + 1);
	}
	return root;
}

Node * getRoot(vi& ar, int n) {
	Node * root = NULL;
	FOR(i, n) {
		root = insertNode(root, ar[i], 0);
	}
	return root;
}

void left_view(ofstream& fout, Node * root, int &M) {
	if (root == NULL) return;
	if (M < root->depth) {
		cout << root->data << " ";
		M = root->depth;
	}
	left_view(fout, root->left, M);
	left_view(fout, root->right, M);
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
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		Node * root = getRoot(ar, n);
		int M = -1;
		left_view(fout, root, M);
		cout << endl;

	}
	return 0;
}

