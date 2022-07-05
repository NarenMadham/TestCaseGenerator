#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, ll t, ll maxSize){
    fout << t << endl;
    while(t--){
        ll n = getRand(1, maxSize);
        string x = getRandomString(n);
        fout << x << " ";
        if((t & 1) && (getRand(1,1e9) & 1)) x[0]++;
        shuffle(x);
        fout << x << endl;
    }

}

int main() {

	ofstream fout;
	fout.open("t2.txt");

    //sample
    // helper(fout, 5, 16);

    //t1
    helper(fout, 1e3, 1e3);

    //t2
    // helper(fout, 1e1, 1e5);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/

