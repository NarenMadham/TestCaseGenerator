#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout


int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long int sa = 0, sb = 0;
		int dragon[n], vessel[n];
		for (int i = 0; i < n; i++) {
			cin >> dragon[i];
			sa += dragon[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> vessel[i];
			sb += vessel[i];
		}

		if (sb < sa) cout << -1 << endl;
		else {
			int start = 0;
			int end = 1;
			long long int d = dragon[start];
			long long int v = vessel[start];
			while (start != end) {
				while (d <= v && start != end) {
					d += dragon[end];
					v += vessel[end];
					end = (end + 1 ) % n;
				}
				if (start == end) {
					cout << start + 1 << endl;
					break;
				}
				else {
					start = end;
					d = dragon[start];
					v = vessel[start];
					end = (start + 1) % n;
				}
			}
		}
	}
	return 0;
}