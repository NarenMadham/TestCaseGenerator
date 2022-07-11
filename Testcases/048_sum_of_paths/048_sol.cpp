#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout
using namespace std;


class Node {
public:
	int data;
	Node * left;
	Node * right;
public:
	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

Node * createNode(Node * root, int data) {
	if (root == NULL) {
		Node * n = new Node(data);
		return n;
	}
	if (data < root->data) {
		root->left = createNode(root->left, data);

	} else if (data > root->data) {
		root->right = createNode(root->right, data);
	}
	return root;
}

long long int getll(string M) {
	int n  = M.length();
	long long int res = 0;
	for (int i = 0; i < n; i++) {
		res = (res * 10) + (M[i] - '0');
	}
	return res;
}

void rtlutil(Node * root, string M, long long int& res) {
	if (root == NULL) return;

	M = M + to_string(root->data);
	long long int temp = getll(M) % MOD;
	if (root->left == NULL && root->right == NULL) {
		res = (res + temp) % MOD;
	}
	//cout<<temp<<endl;
	rtlutil(root->left, to_string(temp), res);
	rtlutil(root->right, to_string(temp), res);
}

long long int RootToLeaf(Node * root) {
	long long int res = 0;
	rtlutil(root, "", res);
	return res;
}

int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Node * root = NULL;
		for (int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			root = createNode(root, temp);
		}
		cout << (RootToLeaf(root) % 1000000007) << endl;
	}
	return 0;
}