#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;




int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleArraysOneParam(fout, 5, 18, 1, 12);

	//t1
	// multipleArraysOneParam(fout, 1e3, 1e3 - getRand(1, 10), 1e6, 1e6 + 400);

	//t2
	multipleArraysOneParam(fout, 1e1, 2e5 - getRand(1, 10), 1e9 - 400, 1e9);

	//t3



	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/