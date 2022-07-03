#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t4.txt");

	//sample
	// multipleRandomArrays(fout, 5, 12, 1, 100);

	//t1
	// t1t2(fout, 1e3, 1, 1e6);

	//t2
	// t1t2(fout, 2e5, 1, 1e9);

	//t3
	// maxTestCase(fout, 1e5, 1e7);

	//t4
	multipleRandomArrays(fout, 1e3, 1e3, 1, 1e8);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/