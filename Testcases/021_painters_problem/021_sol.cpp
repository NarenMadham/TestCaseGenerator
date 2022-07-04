#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;


bool isValid(vll& ar, int mid, int n, int k) {
	int count = 1, sum = 0;
	FOR(i, n) {
		sum += ar[i];
		if (sum > mid) {
			sum = ar[i], count++;
			if (count > k) return false;
		}
	}
	return true;
}

int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vll ar(n);
		FOR(i, n) cin >> ar[i];
		ll lo = maxelement(ar), hi = sumelement(ar);
		ll res = 0;
		while (lo <= hi) {
			ll mid = (lo + hi) >> 1;
			if (isValid(ar, mid, n, k)) {
				res = mid;
				hi = mid - 1;
			} else {lo = mid + 1;}
		}
		cout << res << endl;

	}


	return 0;
}

