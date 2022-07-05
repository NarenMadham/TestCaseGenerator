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
		int n, k;
		cin >> n >> k;
		if ((n % (k + 1)) == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;
}

