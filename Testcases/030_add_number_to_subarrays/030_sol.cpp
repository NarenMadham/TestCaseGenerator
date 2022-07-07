#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

    int n, q;
    cin>>n>>q;
    vll ar(n, 0);
    while(q--){
        int x, a, b;
        cin>>x>>a>>b;
        ar[a] += x;
        if(b+1 < n) ar[b+1] += (x * -1);
    }

    for(int i=1;i<n;i++) ar[i] = ar[i-1] + ar[i];
    FOR(i, n) cout << ar[i] << " ";
    cout << endl;

	return 0;
}

