#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, ll t, ll maxSize, ll m, ll M) {
	fout << t << endl;
	while (t--) {
		int n;
		n = getRand(1, maxSize);
		vll ar = getRandomArrayNoDup(n, m + buffer(6), M - buffer(6), false);
		vll br = getRandomArrayNoDup(n, m + buffer(6), M - buffer(6), false);
		vll cr = getRandomArrayNoDup(n, m + buffer(6), M - buffer(6), false);
		fout << n << endl;
		FOR(i, n) fout << ar[i] << " "; fout << endl;
		FOR(i, n) fout << br[i] << " "; fout << endl;
		FOR(i, n) fout << cr[i] << " "; fout << endl;
	}
}

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// helper(fout, 5, 17, 1, 47);

	//t1
	// helper(fout, 1e3, 1e3, 1, 1e6);

	//t2
	helper(fout, 1e1, 1e5, 1, 1e7);



	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/