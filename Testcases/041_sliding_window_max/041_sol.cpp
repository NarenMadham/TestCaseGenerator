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
		deque<int> d;
		FOR(i, k) {
			while (!d.empty() && ar[d.back()] > ar[i]) d.pop_back();
			d.push_back(i);
		}
		cout << ar[d.front()] << " ";
		for (int i = k; i < n; i++) {
			if (!d.empty() && (i - d.front() >= k)) d.pop_front();
			while (!d.empty() && ar[d.back()] > ar[i]) d.pop_back();
			d.push_back(i);
			cout << ar[d.front()] << " ";
		}
		cout << endl;
	}
	return 0;
}

