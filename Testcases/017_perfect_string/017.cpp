#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// randomStrings(fout, 5, 50);

	//t1
	// randomStrings(fout, 1e4, 1e2);

	//t2
	randomStrings(fout, 1e2, 1e4);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/