#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("sample.txt");
	ofstream fout;
	fout.open("sampleout.txt");

	ll MAX(1e6 + 1);
	vll res(MAX, 0);
	res[1] = 2;
	res[2] = 4;
	res[3] = 7;
	for (int i = 4; i < MAX; i++) {
		res[i] = (res[i - 1] + res[i - 2] + res[i - 3]) % MOD;
	}

	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << res[n] << endl;
	}


	return 0;
}

