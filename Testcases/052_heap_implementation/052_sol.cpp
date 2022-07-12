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
	priority_queue<int> pq;

	while (t--) {
		int a, b;
		cin >> a;
		if (a == 1) {
			cin >> b;
			pq.push(b);
		} else if (a == 2) {
			if (pq.empty()) {
				cout << "EMPTY" << endl;
			} else {
				cout << pq.top() << endl;
			}
		} else {
			if (pq.empty()) {
				cout << "EMPTY" << endl;
			} else {
				pq.pop();
			}
		}
	}
	return 0;
}

