#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomArrays(fout, 5, 11, 3, 47);

	//t1
	// multipleRandomArrays(fout, 1e3, 1e1, 3, 1e3);

	//t2
	multipleRandomArrays(fout, 20, 1e2, 3, 1e6);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/