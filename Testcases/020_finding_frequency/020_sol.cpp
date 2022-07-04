#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t3.txt");
	ofstream fout;
	fout.open("o3.txt");

	int n;
	cin >> n;
	vll ar(n);
	mii mp;
	FOR(i, n) {
		cin >> ar[i];
		mp[ar[i]]++;
	}

	int q;
	cin >> q;
	while (q--) {
		int x;
		cin >> x;
		cout << mp[x] << endl;
	}


	return 0;
}

