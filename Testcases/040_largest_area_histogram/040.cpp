#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomArrays(fout, 5, 12, 1, 12);

	// t1
	// multipleRandomArrays(fout, 1e3, 1e3 - buffer(3), 1, 1e6);


	//t2
	multipleRandomArrays(fout, 1e1, 2e5 - buffer(3), 1, 1e9);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/