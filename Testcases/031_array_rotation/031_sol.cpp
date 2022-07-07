#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;

void reverse(vi& ar, int i, int j){
    while(i <= j) swap(ar[i++], ar[j--]);   
}

void rotate(ofstream& fout, int n, int k,vi& ar){
    reverse(ar, n-k, n-1);
    reverse(ar, 0, n-k-1);
    reverse(ar, 0, n-1);
    FOR(i, n) cout << ar[i] << " ";
    cout << endl;
}
int main() {
	ifstream fin("sample.txt");
	ofstream fout;
	fout.open("sampleout.txt");

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vi ar(n);
        FOR(i, n) cin>>ar[i];
        rotate(fout, n, k, ar);
    }


	return 0;
}

