#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// typeQueries(fout, 10, 1, 3, 1, 43);

	//t1
	// typeQueries(fout, 1e3, 1, 3, 1, 1e6);

	//t2
	typeQueries(fout, 1e5, 1, 3, 1, 1e6 - buffer(8));

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/