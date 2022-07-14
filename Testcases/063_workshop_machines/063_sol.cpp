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
		ll n, k;
		cin >> n >> k;
		vll ar(n), br(n);
		FOR(i, n) cin >> ar[i];
		FOR(i, n) cin >> br[i];

		vll dpa(n, 0), dpb(n, 0);
		dpa[0] = ar[0]; dpb[0] = br[0];

		FOOR(i, 1, n) {
			dpa[i] = min(dpa[i - 1], dpb[i - 1] + k) + ar[i];
			dpb[i] = min(dpb[i - 1], dpa[i - 1] + k) + br[i];
		}

		cout << min(dpa[n - 1], dpb[n - 1]) << endl;
	}


	return 0;
}

