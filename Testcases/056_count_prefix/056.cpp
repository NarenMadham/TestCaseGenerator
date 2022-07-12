#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, ll t, ll q, ll maxSize) {
	vstr ar;
	int temp = q;
	while (temp--) {
		ll n = getRand(1, maxSize / 4);
		ar.pb(getRandomString(n));
	}
	fout << t << endl;
	while (t--) {
		ll i = getRand(0, q - 1);
		string x = "", z = ar[i];
		if (getRand(1, getRand(1, 1e6)) & 1 == 1) z[z.length() - 1] = (z[z.length() - 1] == 'a') ? z[z.length() - 1] + 1 : z[z.length() - 1] - 1;
		ll y = getRand(ar[i].size(), maxSize);
		if (y != 0) x = getRandomString(y);
		fout << z << x << endl;
	}
	fout << q << endl;
	FOR(i, q) fout << ar[i] << endl;

}

int main() {

	ofstream fout;
	fout.open("sample.txt");

	//sample
	helper(fout, 10, 5, 20);

	//t1
	// helper(fout, 1e3, 1e2, 50);

	//t2
	// helper(fout, 1e2, 1e2, 1e2);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/