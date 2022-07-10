#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, ll t, ll maxSize, ll m, ll M) {
	fout << t << endl;
	while (t--) {
		int n = getRand(1, maxSize);
		fout << n << endl;
		vll ar = getRandomArray(n, m, M);
		vll br = getRandomArray(n, m, M);
		FOR(i, n) fout << ar[i] << " "; fout << endl;
		FOR(i, n) fout << br[i] << " "; fout << endl;
	}
}

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// helper(fout, 5, 13, 1, 18);

	//t1
	// helper(fout, 1e3, 1e3 - buffer(9), 1, 1e6);

	//t2
	helper(fout, 1e1, 1e5 - buffer(9), 1, 1e9);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/