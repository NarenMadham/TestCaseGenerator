#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t1.txt");
	//sample
	// multipleRandomArraysNoDup(fout, 5, 20, 2, 50);

	//t1
	multipleRandomArraysNoDup(fout, 1e3, 1e3 - buffer(7), 2, 1e6);

	//t2
	// multipleRandomArraysNoDup(fout, 1e1, 1e5 - buffer(7), 2, 1e9);



	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/