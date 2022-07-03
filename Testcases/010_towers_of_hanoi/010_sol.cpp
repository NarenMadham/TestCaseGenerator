#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;


void toh(ofstream& fout, int n, char s, char t, char d) {
	if (n == 0) return;
	toh(fout, n - 1, s, d, t);
	fout << "Move " << n << " from " << s << " to " << d << endl;
	toh(fout, n - 1, t, s, d);

}

int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	int ind = 1;
	while (t--) {
		int n;
		cin >> n;
		fout << "Case: " << ind++ << endl;
		toh(fout, n, 'A', 'B', 'C');
	}


	return 0;
}

