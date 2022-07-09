#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;


bool cb(ll i, int j) {
	return ((i >> j)  & 1)  == 1;
}
int main() {
	ifstream fin("t3.txt");
	ofstream fout;
	fout.open("o3.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vll ar(n);
		FOR(i, n) cin >> ar[i];
		vi br(32, 0);
		ll res = 0;
		FOR(j, 32) {
			int x = 0;
			FOR(i, n) {
				if (cb(ar[i], j)) x = i + 1;
				res += x * (1 << j);
			}
		}
		cout << res << endl;
	}

	return 0;
}

