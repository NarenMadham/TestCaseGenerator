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
		string s;
		cin >> s;
		int x = 0;
		bool f = false;
		FOR(i, s.length()) {
			x |= (1 << (s[i] - 'a'));
			if (x == ((1 << 26) - 1)) { f = true; break;}
		}
		if (f) fout << "YES" << endl;
		else fout << "NO" << endl;
	}


	return 0;
}

