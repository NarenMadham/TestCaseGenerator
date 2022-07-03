#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int count = 0;
		while (n) {
			++count;
			n = n & (n - 1);
		}
		cout << count << endl;
	}


	return 0;
}

