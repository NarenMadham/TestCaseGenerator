#include<bits/stdc++.h>
#include "../../testcase.cpp"

using namespace std;

void helper(ofstream& fout, ll t, ll k, ll m, ll M) {
	fout << t << endl;
	ll temp = 1e5;
	while (t--) {
		int n = getRand(m, temp);
		while (!(n & 1)) n = getRand(m, temp);
		nonRepeating(fout, n, k, m, M);
	}
}
int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	/*int t = 5;

	}*/

	//t1
	// helper(fout, 1e3, 2, 1, 1e9);

	//t2
	helper(fout, 10, 2, 1, 1e9);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/