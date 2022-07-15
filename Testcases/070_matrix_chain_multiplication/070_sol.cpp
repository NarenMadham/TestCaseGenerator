#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;


int mcm(vi& arr, int n) {
    vvll dp(n, vll(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = 0;
        }
    }
    for (int l = 2; l < n; l++) {
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            dp[i][j] = 1e9 + 7;

            for (int k = i - 1; k < j; k++) {
                int temp = (dp[i][k] + dp[k + 1][j] + ((arr[i - 1] * 1ll * arr[k]) % MOD * 1ll * arr[j]) % MOD) % MOD;
                if (temp < dp[i][j]) {
                    dp[i][j] = temp;
                }
            }
        }
    }
    return dp[1][n - 1];
}



int main() {
    ifstream fin("t1.txt");
    ofstream fout;
    fout.open("o1.txt");
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vi ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        cout << mcm(ar, n) << endl;
    }
}