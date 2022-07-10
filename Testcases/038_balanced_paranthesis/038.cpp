#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;


void helper(ofstream& fout, ll t, ll maxSize) {
	fout << t << endl;
	vc ar(3);
	ar[0] = '(';
	ar[1] = '{';
	ar[2] = '[';
	while (t--) {
		int n = getRand(1, maxSize);
		if (n & 1) n = getRand(1, maxSize);
		stack<char> st;
		string res = "";
		int x = n / 2;
		while (x--) {
			char temp = ar[getRand(0, 2)];
			st.push(temp);
			res += temp;
		}
		bool k = ((t & 1) || ((getRand(1, 3) & 1) == 1));
		string s2 = "";
		while (!st.empty()) {
			char c = st.top(); st.pop();
			if (c == '(') {
				s2 += ')';
			} else if (c == '{') {
				s2 += '}';
			} else {
				s2 += ']';
			}
		}
		if (k) shuffle(s2);
		fout << res << s2 << endl;
	}

}

int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// helper(fout, 5, 17);

	//t1
	// helper(fout, 1e3, 1e3 + buffer(7));


	//t2
	helper(fout, 1e1, 2e5 + buffer(7));


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/