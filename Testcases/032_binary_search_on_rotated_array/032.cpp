
#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ostream& fout, ll t, ll maxSize, ll m, ll M ){
    fout << t << endl;
    while(t--){
        ll n = getRand(m, maxSize);
        ll k = getRand(1, n);
        vll ar = getRandomArrayNoDup(n, m, M, true);
        rotatec(ar, getRand(0, n-1));
        ll s = ar[k];
        fout << n << " " << s << endl;
        FOR(i, n) fout << ar[i] << " ";
        fout << endl;
    }
}

int main() {

	ofstream fout;
	fout.open("t2.txt");

    //sample
    // helper(fout, 5, 15, 1, 39);

    //t1
    // helper(fout, 1e3, 1e3, 1, 1e6);

    //t1
    helper(fout, 2e1, 1e5, 1, 1e9);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/