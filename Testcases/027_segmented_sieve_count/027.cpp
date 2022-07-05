#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomPair(fout, 5, 48, 1, 100);

	//t1
	// multipleRandomPair(fout, 1e3, 1e3, 1, 1e6);

	//t2
	multipleRandomPair(fout, 2, 1e6, 1e11, 1e12);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/