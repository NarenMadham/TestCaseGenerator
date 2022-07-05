#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");
	ll N = 1e6 + 1;
	vb vis(N, true);
	vi res(N, 0);

	vis[0] = false; vis[1] = false;

	for (int i = 2; i <= 1e3; i++) {
		if (vis[i]) {
			for (ll j = i * i; j <= N; j += i) {
				vis[j] = false;
			}
		}
	}
	for (int i = 1; i <= 1e6; i++) {
		if (vis[i]) {
			res[i] = res[i - 1] + 1;
		} else {
			res[i] = res[i - 1];
		}
	}

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << res[n] << endl;
	}

	return 0;
}

