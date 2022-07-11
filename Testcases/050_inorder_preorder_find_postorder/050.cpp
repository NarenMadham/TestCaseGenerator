#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout
using namespace std;


class Node {
public:
	int data;
	Node* left, *right;
	Node(int data) {
		this->data = data;
		this->left = NULL; this->right = NULL;
	}
};

Node * insertNode(Node * root, int x) {
	if (!root) {
		Node * node = new Node(x);
		return node;
	}
	if (x > root->data) {
		root->right = insertNode(root->right, x);
	} else {
		root->left = insertNode(root->left, x);
	}
	return root;
}

Node * getRoot(vi& ar, int n) {
	Node * root = NULL;
	FOR(i, n) {
		root = insertNode(root, ar[i]);
	}
	return root;
}

void preorder(ofstream& fout, Node * root) {
	if (!root) return;

	cout << root->data << " ";
	preorder(fout, root->left);
	preorder(fout, root->right);
}

void inorder(ofstream& fout, Node * root) {
	if (!root) return;

	inorder(fout, root->left);
	cout << root->data << " ";
	inorder(fout, root->right);
}

void postorder(ofstream& fout, Node * root) {
	if (!root) return;

	postorder(fout, root->left);
	postorder(fout, root->right);
	cout << root->data << " ";
}

int main() {
	ifstream fin("t2copy.txt");
	ofstream fout;
	fout.open("t2.txt");

	int t;
	cin >> t;
	int idx = 1;
	cout << t << endl;
	while (t--) {
		int n;
		cin >> n;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		Node * root = getRoot(ar, n);
		cout << n << endl;
		preorder(fout, root);
		cout << endl;
		inorder(fout, root);
		cout << endl;
	}
	return 0;
}

