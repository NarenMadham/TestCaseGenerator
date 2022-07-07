#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("sample.txt");

    //sample
    // multipleArraysOneParam(fout, 5, 15, 1, 40);

    //t1
    // multipleArraysOneParam(fout, 1e3, 1e3, 1, 1e6);

    //t2
    multipleArraysOneParam(fout, 1e1, 2e5, 1, 1e9);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/