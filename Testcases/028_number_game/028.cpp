#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// rangeRandomPairMultiple(fout, 5, 1, 101, 1, 11);

	//t1
	// rangeRandomPairMultiple(fout, 1e3, 1, 1e3, 1, 1e2);

	//t2
	rangeRandomPairMultiple(fout, 2e6, 1, 2e6, 1, 1e3);



	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/