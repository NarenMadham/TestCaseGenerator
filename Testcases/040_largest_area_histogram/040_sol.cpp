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
		stack<int> st;
		ll res = 0;
		FOR(i, n) {
			while (!st.empty() && (ar[st.top()] > ar[i])) {
				int x = st.top(); st.pop();
				if (st.empty()) {
					res = max(res, ar[x] * 1ll * i);
				} else {
					res = max(res, ar[x] * 1ll * (i - st.top() - 1));
				}

			}
			st.push(i);
		}
		int i = n;
		while (!st.empty()) {
			int x = st.top(); st.pop();
			if (st.empty()) {
				res = max(res, ar[x] * 1ll * i);
			} else {
				res = max(res, ar[x] * 1ll * (i - st.top() - 1));
			}

		}
		cout << res << endl;
	}


	return 0;
}

