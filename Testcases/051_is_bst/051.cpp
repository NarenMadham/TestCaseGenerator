#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomArraysNoDup(fout, 5, 17, 1, 67);

	//t1
	// multipleRandomArraysNoDup(fout, 1e3, 1e3, 1, 67e5);

	//t2
	multipleRandomArraysNoDup(fout, 1e1, 1e5, 1, 67e6);
	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/