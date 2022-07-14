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
		vll arr(n);
		FOR(i, n) cin >> arr[i];
		long long int sum = INT_MIN;
		int index;
		long long int dp[n];
		dp[0] = arr[0];
		for (int i = 1; i < n; i++) {
			if (dp[i - 1] + arr[i] > arr[i]) {
				dp[i] = dp[i - 1] + arr[i];
				if (sum < dp[i]) {
					sum = dp[i];
				}
			} else {
				dp[i] = arr[i];
				continue;
			}
		}
		FOR(i, n) sum = max(sum, dp[i]);
		for (int i = 0; i < n; i++) {
			if (dp[i] == sum) {
				index = i;
				break;
			}
		}
		int i = index;
		i--;
		while (dp[i - 1] == 0 || dp[i] != arr[i]) {
			i--;
		}

		cout << sum << " " << i << " " << index << endl;
	}


	return 0;
}

