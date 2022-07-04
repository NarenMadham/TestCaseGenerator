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
		int lo = 0, hi = n - 1;
		int res = -1;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		while (lo <= hi) {
			int mid = (lo + hi) >> 1;
			if (ar[mid] <= k) {
				res = ar[mid];
				lo = mid + 1;
			} else {hi = mid - 1;}
		}
		cout << res << endl;
	}

	return 0;
}

