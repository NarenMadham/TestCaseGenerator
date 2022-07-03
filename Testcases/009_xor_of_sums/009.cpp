#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;




int main() {

	ofstream fout;
	fout.open("t4.txt");

	//sample
	// multipleRandomArrays(fout, 5, 10, 1, 15);

	//t1
	// t1t2(fout, 1e3, 1, 1e6);

	//t2
	// t1t2(fout, 2e5, 1, 1e8);

	// t3
	// fout << 1 << endl;
	// maxTestCase(fout, 1e6, 1e9);

	//t4
	multipleRandomArrays(fout, 1e3, 1e3, 1, 1e9);




	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/