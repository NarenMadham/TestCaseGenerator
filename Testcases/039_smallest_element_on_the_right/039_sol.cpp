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
		FOR(i, n) {
			while (!st.empty() && (st.top() > ar[i])) st.pop();
			if (st.empty())  cout << -1 << " ";
			else cout << st.top() << " ";
			st.push(ar[i]);
		}
		cout << endl;
	}

	return 0;
}

