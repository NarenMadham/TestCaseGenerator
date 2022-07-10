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
		string ar;
		cin >> ar;
		bool f = true;
		stack<char> st;
		FOR(i, ar.length()) {
			if (ar[i] == '(' || ar[i] == '{' || ar[i] == '[') {
				st.push(ar[i]);
			} else if (ar[i] == ')') {
				if (!st.empty() && st.top() == '(') st.pop();
				else {f = false; break;}
			} else if (ar[i] == ']') {
				if (!st.empty() && st.top() == '[') st.pop();
				else {f = false; break;}
			} else {
				if (!st.empty() && st.top() == '{') st.pop();
				else {f = false; break;}
			}
		}
		if (f) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

