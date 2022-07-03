#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int count = 0;
		while (n) {
			if (n & 1) count++;
			n >>= 1;
		}
		if (count == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}

