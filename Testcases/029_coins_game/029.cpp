#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, ll t, ll m, ll M) {
	fout << t << endl;
	while (t--) {
		int n = getRand(m, M);
		int k = 1;
		if (!(n & 1)) {k = 2; n /= 2;}
		eleKTimesRepeat(fout, n, k, m, M);
	}
}

void helper2(ofstream& fout, ll t, ll m, ll M) {
	fout << t << endl;
	while (t--) {
		int n = getRand(m, M);
		vll ar = getRandomArray(n - 1, m, M);
		ll res = 0;
		FOR(i, n - 1) res ^= ar[i];
		if (getRand(1, 10) & 1) ar.pb(res);
		else ar.pb(res + 1);
		shuffle(ar);
		fout << n << endl;
		FOR(i, n) fout << ar[i] << " ";
		fout << endl;
	}
}

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomArrays(fout, 5, 18, 1, 47);

	//t1
	// helper(fout, 1e3, 1, 1e3);

	//t2
	helper2(fout, 1e1, 1, 2e5);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/