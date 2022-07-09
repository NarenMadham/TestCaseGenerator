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
		vll ar(n);
		FOR(i, n) cin >> ar[i];
		vll pre(n), suf(n);
		pre[0] = ar[0];
		suf[n - 1] = ar[n - 1];

		for (int i = 1; i < n; i++) {pre[i] = max(pre[i - 1], ar[i]);}
		for (int i = n - 2; i >= 0; i--) {suf[i] = max(suf[i + 1], ar[i]);}
		ll res = 0;
		FOR(i, n) {
			res += min(pre[i], suf[i]) - ar[i];
		}
		cout << res << endl;
	}

	return 0;
}

