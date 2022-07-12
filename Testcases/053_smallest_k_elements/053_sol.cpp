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
		pqmax(int) pq;
		int n, k; cin >> n >> k;
		vi ar(n); FOR(i, n) cin >> ar[i];
		FOR(i, n) {
			if (pq.size() < k) {
				pq.push(ar[i]);
			} else {
				if (pq.top() > ar[i]) {
					pq.pop();
					pq.push(ar[i]);
				}
			}
		}
		while (!pq.empty()) {cout << pq.top() << " "; pq.pop();}
		cout << endl;
	}
	return 0;
}

