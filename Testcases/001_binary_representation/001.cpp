#include<bits/stdc++.h>
#include "../../testcase.cpp"



using namespace std;
int main() {
	fio;
	ofstream fout;
	fout.open("t2.txt");

	//sample
	// singleNumber(fout, 5, 1, 100);

	//t1
	// singleNumber(fout, 1e3, 1, 1e6);

	//t2
	singleNumber(fout, 1e6, 1, 1e9);


	return 0;
}