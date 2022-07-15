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
		int m, n;
		cin >> m >> n;
		int ar[m][n];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> ar[i][j];
			}
		}
		long long int res = INT_MIN;
		for (int i = 0; i < n; i++) {
			vector<long long int> temp(m, 0);

			for (int j = i; j < n; j++) {
				vector<long long int> dp(m, 0);
				for (int k = 0; k < m; k++) {
					temp[k] += ar[k][j];
				}
				dp[0] = temp[0];
				res = max(res, dp[0]);
				for (int k = 1; k < m; k++) {
					dp[k] = max(dp[k - 1] + temp[k], temp[k]);
					res = max(res, dp[k]);
				}
			}
		}
		cout << res << "\n";
	}
	return 0;
}