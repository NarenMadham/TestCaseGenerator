#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, ll t, ll x, ll y, ll m, ll M) {
	fout << t << endl;
	while (t--) {
		ll k = getRand(1, x);
		ll l = getRand(1, y);
		fout << k << " " << l << endl;
		vvll res = getRandomMatrix(k, l, m, M, true);
		FOR(i, k) { FOR(j, l) fout << res[i][j] << " "; fout << endl;}
	}
}

int main() {

	ofstream fout;
	fout.open("t2.txt");

	// helper(fout, 5, 7, 7, 1, 40);

	// helper(fout, 1e1, 1e2, 1e2, 1, 1e3);

	helper(fout, 1e3, 1e1, 1e1, 1, 1e3);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/