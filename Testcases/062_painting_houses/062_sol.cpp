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
		vi ar(n), br(n), cr(n);
		FOR(i, n) cin >> ar[i];
		FOR(i, n) cin >> br[i];
		FOR(i, n) cin >> cr[i];

		vvi dp(3, vi(n, 0));
		dp[0][0] = ar[0];
		dp[1][0] = br[0];
		dp[2][0] = cr[0];

		FOR1(i, 1, n) {
			dp[0][i] = (min(dp[1][i - 1], dp[2][i - 1]) + ar[i]) % MOD;
			dp[1][i] = (min(dp[2][i - 1], dp[0][i - 1]) + br[i]) % MOD;
			dp[2][i] = (min(dp[0][i - 1], dp[1][i - 1]) + cr[i]) % MOD;
		}
		cout << min(dp[0][n - 1], min(dp[1][n - 1], dp[2][n - 1])) << endl;
	}
	return 0;
}

