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

	ll M(1e6 + 1);
	vll dp(M, 0);
	dp[1] = 1 << 1; dp[2] = 1 << 2; dp[3] = 1 << 3; dp[4] = 1 << 4; dp[5] = 1 << 5;

	FOR1(i, 6, M) dp[i] = ((dp[i - 1] * (1 << 1)) % MOD + (dp[i - 5] * (1 << 5)) % MOD) % MOD;
	while (t--) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}


	return 0;
}

