#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;




int main() {

	ofstream fout;
	fout.open("sample.txt");

	//sample
	multipleRandomArrays(fout, 5, 15, 1, 100);

	//t1
	// t1t2(fout, 1e3, 1, 1e6);

	//t2
	// multipleRandomArrays(fout, 100, 100, 1, 1e6);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/