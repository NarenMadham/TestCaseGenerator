#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

    //sample
    // stringSubstringMultiple(fout, 5, 19);

    //t1
    // stringSubstringMultiple(fout, 1e3, 1e3-getRand(1,13));

    //t2
    stringSubstringMultiple(fout, 1e1, 2e5-getRand(1,13));


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/