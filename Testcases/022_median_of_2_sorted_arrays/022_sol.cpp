#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;



ll floorCount(vll& ar, int n, ll x) {
	ll lo = 0, hi = n - 1;
	ll res = -1;
	while (lo <= hi) {
		ll mid = (lo + hi) >> 1;
		if (ar[mid] < x) {
			res = mid;
			lo = mid + 1;
		} else {
			hi = mid - 1;
		}
	}
	return res + 1;
}

ll ceilCount(vll& ar, int n, ll x) {
	ll lo = 0, hi = n - 1;
	ll res = n;
	while (lo <= hi) {
		ll mid = (lo + hi) >> 1;
		if (ar[mid] > x) {
			res = mid;
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	return n - res;
}

int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vll ar(n), br(m);
		FOR(i, n) cin >> ar[i];
		FOR(i, m) cin >> br[i];

		ll lo = min(ar[0], br[0]);
		ll hi = max(ar[n - 1], br[m - 1]);

		// cout << lo << " " << hi << endl;
		while (lo <= hi) {
			ll mid = (lo + hi) >> 1;
			int f1 = floorCount(ar, n, mid);
			int f2 = floorCount(br, m, mid);
			int c1 = ceilCount(ar, n, mid);
			int c2 = ceilCount(br, m, mid);

			ll lower = f1 + f2;
			ll higher = c1 + c2;

			if (lower < higher) {
				lo = mid + 1;
			} else if (lower > higher) {
				hi = mid - 1;
			} else {
				cout << mid << endl;
				break;
			}

		}

	}


	return 0;
}

