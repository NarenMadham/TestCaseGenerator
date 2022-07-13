#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");

	int t;
	cin >> t;
	ll M (1e6 + 1);
	vll dp(M, 0);
	dp[1] = 1;
	dp[2] = 2;
	FOR1(i, 3, M) dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;

	while (t--) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}


	return 0;
}

