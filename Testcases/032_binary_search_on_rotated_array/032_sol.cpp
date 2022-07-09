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
		vi ar(n);
		FOR(i, n) cin >> ar[i];

		int lo = 0, hi = n - 1;
		while (lo <= hi) {
			int mid = (lo + hi) >> 1;
			if (ar[mid] == k) {
				cout << mid + 1 << endl;
				break;
			}
			if (ar[0] <= ar[mid]) {
				if (k >= ar[0] && k <= ar[mid]) {
					hi = mid - 1;
				} else {
					lo = mid + 1;
				}
			} else {
				if (k >= ar[mid] && k <= ar[n - 1]) {
					lo = mid + 1;
				} else {
					hi = mid - 1;
				}
			}
		}
	}


	return 0;
}

