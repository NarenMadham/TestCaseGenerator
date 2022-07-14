#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;


void helper(ofstream& fout, ll t, ll maxSize, ll m, ll M) {
	fout << t << endl;
	while (t--) {
		int n = getRand(1, maxSize);
		vll ar = getRandomArray(n, m, M);
		ll x = maxelement(ar);
		FOR(i, n) ar[i] -= (x >> 1);
		fout << n << endl;
		FOR(i, n) fout << ar[i] << " "; fout << endl;
	}

}

int main() {

	ofstream fout;
	fout.open("t1.txt");

	//sample
	// helper(fout, 5, 17, 1, 40);

	//t1
	helper(fout, 1e3, 1e3, 1, 4e5);
	// multipleRandomArraysNoDup(fout, 1e3, 1e3, 9, 9e5);

	//t2
	// helper(fout, 1e1, 1e5, 1, 4e8);
	// multipleRandomArraysNoDup(fout, 1e1, 2e5, 9, 7e5);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/