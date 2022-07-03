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
		ll res = 0;
		FOR(i, n) {
			int a; cin >> a;
			res ^= a;
		}
		cout << res << endl;
	}


	return 0;
}

