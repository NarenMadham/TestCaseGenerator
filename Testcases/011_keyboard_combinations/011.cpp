#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;




int main() {

	ofstream fout;
	fout.open("t1.txt");

	//sample
	// singleNumberWithoutZeroOne(fout, 3, 11, 99);

	//t1
	singleNumberWithoutZeroOne(fout, 100, 111, 999);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/