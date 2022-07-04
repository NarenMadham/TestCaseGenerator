#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, int n, int q, ll m, ll M) {
	vll res = getRandomArray(n, m, M);
	fout << n << endl;
	FOR(i, n) fout << res[i] << " ";
	fout << endl;
	vll que = getRandomArrayNoDup(q, 6e4, 9e5);
	fout << q << endl;
	FOR(i, q) fout << que[i] << endl;

}

int main() {

	ofstream fout;
	fout.open("t3.txt");

	//sample
	// helper(fout, 17, 6, 10, 20);

	//t1
	// helper(fout, 1e3, 1e3, 10, 2000);

	//t2
	// helper(fout, 1e5, 1e3, 10, 1e6);

	//t3
	maxTestCase(fout, 1e5, 1e9);
	fout << 1 << endl;
	fout << 1000000000 << endl;


	return 0;

}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/