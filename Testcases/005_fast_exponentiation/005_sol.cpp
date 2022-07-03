#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

void solve(ofstream& fout, ll a, ll b, ll MOD = (1e9 + 7)) {
	ll res = 1, x = a;
	while (b != 0) {
		if (b & 1)
			res = (res * x) % MOD;
		x = (x * x) % MOD;
		b >>= 1;
	}
	cout << res << endl;
}

using namespace std;
int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		solve(fout, a, b, 1e9 + 7);
	}

	return 0;
}

