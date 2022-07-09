#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomArrays(fout, 5, 13, 1, 47);

	//t1
	// multipleRandomArrays(fout, 1e3, 1e3 - (getRand(1, 4)), 1, 1e6);

	//t2
	multipleRandomArrays(fout, 2e1, 1e5 - (getRand(1, 4)), 1, 1e9);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/