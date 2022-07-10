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

int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	int ind = 1;
	while (t--) {
		cout << "Case : " << ind++ << endl;
		int n;
		cin >> n;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		Node * root = getRoot(ar, n);

		int lc = 1, cc = 0, level = 0;
		queue<Node *> q;
		q.push(root);
		while (!q.empty()) {
			Node * node = q.front();
			q.pop();
			cout << node->data << " ";
			if (node->left != NULL) {
				q.push(node->left);
				cc++;
			}
			if (node->right != NULL) {
				q.push(node->right);
				cc++;
			}
			lc--;
			if (lc == 0) {
				level++;
				lc = cc;
				cc = 0;
				cout << endl;
			}
		}
	}
	return 0;
}

