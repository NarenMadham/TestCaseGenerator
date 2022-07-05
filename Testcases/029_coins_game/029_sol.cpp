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
		while (n--) {
			int x; cin >> x;
			res ^= x;
		}

		if (res == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;
}

