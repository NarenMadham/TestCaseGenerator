#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, ll t, ll maxSize, ll m, ll M) {
	fout << t << endl;
	while (t--) {
		int n = getRand(1, maxSize);
		vll ar = getRandomArray(n, m, M);
		vll br = getRandomArray(n, m, M);
		ll x = getRand(1, 50);
		fout << n << " " << x << endl;
		FOR(i, n) fout << ar[i] << " "; fout << endl;
		FOR(i, n) fout << br[i] << " "; fout << endl;
	}
}

int main() {

	ofstream fout;
	fout.open("t1.txt");

	//sample
	// helper(fout, 5, 17, 1, 74);

	//t1
	helper(fout, 50, 1e3 - 1, 1, 1e3);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/