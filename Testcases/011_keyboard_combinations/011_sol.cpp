#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;

void solve(ofstream& fout, vstr& ar, string num, int idx, int n, string res, vstr& ans) {
	if (idx == n) {
		ans.pb(res);
		return;
	}
	FOR(i, ar[num[idx] - '0'].length()) {
		solve(fout, ar, num, idx + 1, n, res + ar[num[idx] - '0'][i], ans);
	}
}

int main() {
	ifstream fin("sample.txt");
	ofstream fout;
	fout.open("sampleout.txt");

	int t;
	cin >> t;
	vstr ar;
	ar.pb(""); ar.pb("");
	ar.pb("abc");
	ar.pb("def");
	ar.pb("ghi");
	ar.pb("jkl");
	ar.pb("mno");
	ar.pb("pqrs");
	ar.pb("tuv");
	ar.pb("wxyz");
	int ind = 1;
	while (t--) {
		string n;
		cin >> n;
		cout << "Case: " << ind++ << endl;
		vstr ans;
		solve(fout, ar, n, 0, n.length(), "", ans);
		sortasc(ans);
		FOR(i, ans.size()) cout << ans[i] << endl;

	}


	return 0;
}

