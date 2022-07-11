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

Node* constructTree(vi& pre, vi& in, unordered_map<int, int>& mp, int m, int M, int& index) {
	if (m > M) return NULL;
	int temp = pre[index++];
	int i = mp[temp];
	if (!(i >= m && i <= M)) return NULL;
	Node * node = new Node(temp);
	if (m == M) {
		return node;
	}
	node->left = constructTree(pre, in, mp, m, i - 1, index);
	node->right = constructTree(pre, in, mp, i + 1, M, index);
	return node;
}

void postorder(ofstream& fout, Node * root) {
	if (root == NULL) return;
	postorder(fout, root->left);
	postorder(fout, root->right);
	cout << root->data << " ";
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
		vi pre(n), in(n);
		unordered_map<int, int> mp;
		FOR(i, n) cin >> pre[i];
		FOR(i, n) {
			cin >> in[i];
			mp[in[i]] = i;
		}

		int index = 0;
		Node * root = constructTree(pre, in, mp, 0, n - 1, index);
		postorder(fout, root);
		cout << endl;

	}
	return 0;
}

