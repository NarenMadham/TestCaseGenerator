#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t4.txt");
	ofstream fout;
	fout.open("o4.txt");

	int t;
	fin >> t;
	while (t--) {
		int n;
		fin >> n;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		ll res = 0;
		for (int j = 0; j < 32; j++) {
			ll s(0), us(0);
			for (int i = 0; i < n; i++) {
				if (((ar[i] >> j) & 1) == 1) s++;
				else us++;
			}
			res += s * us * (1 << j) *  2;
		}
		fout << res << endl;
	}


	return 0;
}

