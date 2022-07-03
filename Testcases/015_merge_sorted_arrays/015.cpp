#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// twoArraysNoCommonElements(fout, 3, 15, 15, 1, 100);

	//t1
	// twoArraysNoCommonElements(fout, 1e3, 1e3, 1e3, 1, 1e6);

	//t2
	twoArraysNoCommonElements(fout, 10, 1e5, 1e5, 1, 5e6);

	return 0;
}

/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/