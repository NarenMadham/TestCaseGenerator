#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleArraysOneParam(fout, 5, 17, 1, 16);

	//t1
	// multipleArraysOneParam(fout, 1e3, 1e3 - buffer(8), 1, 1e3);

	//t2
	multipleArraysOneParam(fout, 1e1, 2e5 - buffer(8), 1, 1e6);



	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/