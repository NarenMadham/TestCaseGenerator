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
		int n1, n2;
		cin >> n1 >> n2;
		vi ar(n1), br(n2);
		FOR(i, n1) cin >> ar[i];
		FOR(j, n2) cin >> br[j];

		int i = 0, j = 0;
		vi res;
		while ((i < n1) && (j < n2)) {
			if (ar[i] < br[j]) res.pb(ar[i++]);
			else res.pb(br[j++]);
		}

		while (i < n1) res.pb(ar[i++]);
		while (j < n2) res.pb(br[j++]);

		FOR(i, res.size()) cout << res[i] << " ";
		cout << endl;

	}


	return 0;
}

