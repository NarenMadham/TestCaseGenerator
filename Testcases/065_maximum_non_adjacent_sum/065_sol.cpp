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
		vll dp(n);
		dp[0] = ar[0];
		dp[1] = max(ar[0], ar[1]);
		for (int i = 2; i < n; i++) {
			dp[i] = max(max(ar[i], dp[i - 2] + ar[i]), dp[i - 1]);
		}
		fout << dp[n - 1] << endl;
	}
	return 0;
}

