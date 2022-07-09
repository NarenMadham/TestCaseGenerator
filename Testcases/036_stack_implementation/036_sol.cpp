#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	stack <ll> st;
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a;
		if (a == 1) {
			cin >> b;
			st.push(b);
		} else if (a == 2) {
			if (!st.empty()) {
				cout << st.top() << endl;
			} else {
				cout << "Empty" << endl;
			}
		} else {
			if (!st.empty()) {
				st.pop();
			} else {
				cout << "Empty" << endl;
			}
		}
	}


	return 0;
}

