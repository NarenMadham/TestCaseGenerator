#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");

	int nmax = 2000, rmax = 2000;
	vector<vector<ll> > dp(nmax + 1, vll(rmax + 1, 0));
	for (int i = 0; i <= nmax; i++) {
		dp[i][0] = 1L;
	}
	for (int j = 0; j <= rmax; j++) {
		dp[0][j] = 0L;
	}
	dp[0][0] = 1;

	for (int i = 1; i <= nmax; i++) {
		for (int j = 1; j <= rmax; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 1000000007L;
		}
	}

	int t;
	cin >> t;
	while (t--) {
		int n, r;
		cin >> n >> r;
		cout << dp[n][r] << endl;
	}


	return 0;
}

