#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;

int knapsack(int w[], int v[], int n, int b);
int max(int a, int b);

int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");


	int t;
	cin >> t;
	while (t--) {
		int b, n;
		cin >> n >> b;
		int w[n], v[n];
		FOR(i, n) cin >> w[i];
		FOR(i, n) cin >> v[i];
		cout << knapsack(w, v, n, b) << endl;
	}
	return 0;
}

int knapsack(int w[], int v[], int n, int b) {
	int dp[n + 1][b + 1];
	for (int i = 0; i <= n; i++) {
		dp[i][0] = 0;
	}
	for (int j = 0; j <= b; j++) {
		dp[0][j] = 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= b; j++) {
			if (j - w[i - 1] >= 0) {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	return dp[n][b];
}

int max(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}