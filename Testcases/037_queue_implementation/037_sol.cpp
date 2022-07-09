#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	queue<ll> q;
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a;
		if (a == 1) {
			cin >> b;
			q.push(b);
		} else if (a == 2) {
			if (!q.empty()) {
				cout << q.front() << endl;
			} else {
				cout << "Empty" << endl;
			}
		} else {
			if (!q.empty()) {
				q.pop();
			} else {
				cout << "Empty" << endl;
			}
		}
	}


	return 0;
}

