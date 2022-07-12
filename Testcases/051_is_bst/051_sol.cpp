#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;


int right(int i) {
	return 2 * i + 1;
}

int left(int i) {
	return 2 * i ;
}

bool isBST(vi& ar, int n, int idx, ll a, ll b) {

	if (idx >= n) return true;

	if (ar[idx] < a || ar[idx] > b) return false;

	bool x = isBST(ar, n, left(idx), a, ar[idx]);
	bool y = isBST(ar, n, right(idx), ar[idx], b);
	return x && y;

}

int main() {
	ifstream fin("sample.txt");
	ofstream fout;
	fout.open("sampleout.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi ar(n);
		FOR(i, n) cin >> ar[i];

		if (isBST(ar, n, 0, INT_MIN, INT_MAX)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}

	}


	return 0;
}

