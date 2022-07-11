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

void nutil(Node * root, int k, unordered_set<Node *>& vis, int& count) {
	if (root == NULL) {
		return;
	}
	vis.insert(root);
	if (k == 0) {
		count += 1;
		return;
	}
	if (vis.find(root->left) == vis.end()) {
		nutil(root->left, k - 1, vis, count);
	}
	if (vis.find(root->right) == vis.end()) {
		nutil(root->right, k - 1, vis, count);
	}
}

bool nodesatk(Node * root, int s, int k, int& d, unordered_set<Node *>& vis, int& count) {
	if (root == NULL) return false;
	if (root->data == s) {
		nutil(root, k, vis, count);
		return true;
	}
	bool l = nodesatk(root->left, s, k, d, vis, count);
	bool r = nodesatk(root->right, s, k, d, vis, count);
	if (l) {
		d += 1;
		nutil(root, k - d, vis, count);
		return true;
	}
	if (r) {
		d += 1;
		nutil(root, k - d, vis, count);
		return true;
	}
	return false;
}

Node * getRoot(vi& ar, int n) {
	Node * root = NULL;
	FOR(i, n) {
		root = insertNode(root, ar[i]);
	}
	return root;
}

int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n, k, x;
		cin >> n >> k >> x;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		Node * root = getRoot(ar, n);
		int count(0), d(0);
		unordered_set<Node*> vis;
		nodesatk(root, x, k, d, vis, count);
		cout << count << endl;

	}
	return 0;
}

