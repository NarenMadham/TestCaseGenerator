#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomArraysNoDup(fout, 5, 17, 1, 34);

	//t1
	// multipleRandomArraysNoDup(fout, 1e3, 1e3, 1, 1e6);

	//t2
	multipleRandomArraysNoDup(fout, 1e1, 2e5, 1, 1e9);



	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/