#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	// fout.open("sample.txt");
	fout.open("t3.txt");
	// fout.open("t2.txt");

	//sample
	// multipleRandomArrays(fout, 5, 14, 1, 32);

	//t1
	// t1t2(fout, 1e3 - getRand(1, 4), 1, 1e6);

	//t2
	// t1t2(fout, 2e5 - getRand(1, 6), 1, 1e9);

	//t3
	multipleRandomArrays(fout, 1e3, 1e3 - getRand(1, 13), 1, 1e6 - getRand(1, 3));


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/