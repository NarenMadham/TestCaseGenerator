#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleRandomArraysPoNe(fout, 5, 17, 1, 57);

	//t1
	// multipleRandomArraysPoNe(fout, 1e3, 1e3 - buffer(3), 1, 1e5);

	//t2
	multipleRandomArraysPoNe(fout, 1e1, 1e5 - buffer(3), 1, 1e8);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/