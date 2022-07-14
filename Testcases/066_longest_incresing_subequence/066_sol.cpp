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

		vll dp;
		dp.push_back(ar[0]);
		for (int i = 1; i < n; i++) {
			int ind = (upper_bound(dp.begin(), dp.end(), ar[i]) - dp.begin());
			if (ind == dp.size()) {
				if (ar[i] > dp[dp.size() - 1]) {
					dp.push_back(ar[i]);
				}
			} else {
				if (ind == 0) dp[0] = ar[i];
				if (ar[i] > dp[ind - 1]) {
					dp[ind] = ar[i];
				}
			}
		}
		cout << dp.size() << endl;
	}


	return 0;
}

