#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;


void helper(ostream& fout, ll t, ll rmax, ll cmax) {
	fout << t << endl;
	while (t--) {
		int n = getRand(1, rmax);
		int m = getRand(1, cmax);
		fout << n << " " << m << endl;
		vstr ar;
		FOR(i, n) {
			ar.pb(rnd.next("[0-1]{" + to_string(m) + "}"));
		}
		FOR(i, n) {
			fout << ar[getRand(0, n - 1)] << endl;
		}
	}
}

int main() {

	ofstream fout;
	fout.open("t1.txt");

	//sample
	// helper(fout, 5, 7, 8);

	//t1
	helper(fout, 1e2, 1e2, 1e2);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/