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
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		umii mp; int res (0);
		FOR(i, n) if (ar[i] == 0) ar[i] = -1;
		for (int i = 1; i < n; i++) ar[i] = ar[i - 1] + ar[i];
		mp[0] = -1;
		FOR(i, n) {
			if (mp.find(ar[i]) == mp.end()) {
				mp[ar[i]] = i;
			} else {
				res = max(i - mp[ar[i]], res);
			}
		}
		cout << res << endl;
	}


	return 0;
}

