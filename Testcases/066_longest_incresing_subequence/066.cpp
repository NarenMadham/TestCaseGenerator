#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomArrays(fout, 5, 17, 7, 47);

	//t1
	// multipleRandomArrays(fout, 1e3, 1e3 - buffer(9), 1 + buffer(6), 46e7);

	//t2
	multipleRandomArrays(fout, 1e1, 1e5 - buffer(9), 1 + buffer(6), 46e7);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/