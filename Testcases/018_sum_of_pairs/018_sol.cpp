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
		ll n, k;
		cin >> n >> k;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		usi s;
		bool f = false;
		FOR(i, n) {
			if (s.find(k - ar[i]) == s.end()) {
				s.insert(ar[i]);
			} else {
				f = true; break;
			}
		}
		if (f) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;
}

