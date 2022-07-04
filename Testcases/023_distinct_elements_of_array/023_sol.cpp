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
		int n, k;
		cin >> n >> k;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		umii mp;
		FOR(i, k) mp[ar[i]]++;
		cout << mp.size() << " ";
		for (int i = k; i < n; i++) {
			mp[ar[i - k]] -= 1;
			if (mp[ar[i - k]] == 0) mp.erase(ar[i - k]);
			mp[ar[i]] += 1;
			cout << mp.size() << " ";
		}
		cout << endl;
	}

	return 0;
}

