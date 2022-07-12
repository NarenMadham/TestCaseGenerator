#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;



class Node {
public:
	int count;
	Node* ar[26];
	Node() {
		this->count = 0;
		FOR(i, 26) this->ar[i] = NULL;
	}
};

void insertNode(Node * root, string s) {
	Node * curr = root;
	FOR(i, s.length()) {
		if (curr->ar[s[i] - 'a'] == NULL) {
			Node * node = new Node();
			curr->ar[s[i] - 'a'] = node;
		}
		curr = curr->ar[s[i] - 'a'];
		curr->count++;
	}
}

int query(Node * root, string s) {
	Node * curr = root;
	FOR(i, s.length()) {
		if (curr->ar[s[i] - 'a'] == NULL) return 0;
		else curr = curr->ar[s[i] - 'a'];
	}
	return curr->count;
}

int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");

	int t;
	cin >> t;
	Node * root = new Node();
	while (t--) {
		string s;
		cin >> s;
		insertNode(root, s);
	}

	int q;
	cin >> q;
	while (q--) {
		string s;
		cin >> s;
		cout << query(root, s) << endl;
	}
	return 0;
}

