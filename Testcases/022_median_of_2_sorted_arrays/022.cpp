#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");


	//sample
	// twoArraysNoCommonElements(fout, 5, 15, 16, 1, 200);

	//t1
	// twoArraysNoCommonElements(fout, 1e3, 1e3, 1e3 - 1, 1, 1e6);

	//t2
	twoArraysNoCommonElements(fout, 1e1, 1e5, 1e5 - 1, 1, 1e9);



	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/