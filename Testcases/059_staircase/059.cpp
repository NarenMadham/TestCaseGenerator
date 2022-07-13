#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// singleNumberWithoutDup(fout, 5, 1, 17);

	//t1
	// singleNumberWithoutDup(fout, 1e3, 1, 1e6 - buffer(2));

	//t2
	fout << 1000000 << endl;
	FOR1(i, 1, 1e6 + 1) fout << i << endl;


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/