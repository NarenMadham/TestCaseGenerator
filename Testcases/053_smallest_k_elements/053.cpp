#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleArraysOneParam(fout, 5, 20, 2, 50);

	//t1
	// multipleArraysOneParam(fout, 1e3, 1e3 - buffer(4), 2, 1e6);

	//t2
	multipleArraysOneParam(fout, 1e1, 1e5 - buffer(4), 2, 1e9);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/