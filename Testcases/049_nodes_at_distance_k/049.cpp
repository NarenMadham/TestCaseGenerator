#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// multipleArraysTwoParam(fout, 5, 17, 2, 37);

	//t1
	// multipleArraysTwoParam(fout, 1e3, 1e3 - buffer(7), 2, 1e6);

	//t2
	multipleArraysTwoParam(fout, 1e1, 1e4 - buffer(7), 2, 1e9);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/