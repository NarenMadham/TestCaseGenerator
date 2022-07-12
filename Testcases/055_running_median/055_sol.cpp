#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;

void balance(pqmax(int)& lo, pqmin(int)& hi) {
	if (lo.size() > hi.size()) {
		hi.push(lo.top());
		lo.pop();
	} else {
		lo.push(hi.top());
		hi.pop();
	}
}

int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");

	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		vi ar(n); FOR(i, n) cin >> ar[i];
		pqmax(int)lo; pqmin(int)hi;
		int res = ar[0];
		lo.push(res);
		cout << res << " ";
		FOR1(i, 1, n) {
			if (ar[i] < res) {
				lo.push(ar[i]);
			} else {
				hi.push(ar[i]);
			}

			if (abs(lo.size() - hi.size()) > 1) balance(lo, hi);

			if (lo.size() > hi.size()) {
				cout << lo.top() << " ";
			} else if (hi.size() > lo.size()) {
				cout << hi.top() << " ";
			} else {
				cout << ((lo.top() + hi.top()) >> 1) << " ";
			}
		}
		cout << endl;
	}


	return 0;
}

