#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t1.txt");

	//sample
	// multipleRandomPair(fout, 7, 0, 1, 15);

	//t1
	multipleRandomPair(fout, 1e3, 1e3, 1, 1e3);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/