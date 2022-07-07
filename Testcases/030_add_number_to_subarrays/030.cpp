#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, int t, int maxSize, int m, int M){
    int q = maxSize;
    fout << t << " " << q << endl;
    while(q--){
        ll n = getRand(m, M);
        fout << n << " ";
        printpair(fout, getRandomPair(0ll, t-1));
        fout << endl;
    }
}

int main() {

	ofstream fout;
	fout.open("t2.txt");

    //sample
    // helper(fout, 15, 13, 1, 46);

    //t1
    // helper(fout, 1e3, 1e3, 1, 1e6);

    //t2
    helper(fout, 1e6, 1e6, 1, 1e6);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/