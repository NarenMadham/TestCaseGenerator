#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomArraysNoDup(fout, 5, 17, 3, 37);

	//t1
	// multipleRandomArraysNoDup(fout, 1e3, 1e3 - buffer(10), 3, 1e5);

	//t2
	multipleRandomArraysNoDup(fout, 2e1, 1e5, 3, 1e9);



	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/