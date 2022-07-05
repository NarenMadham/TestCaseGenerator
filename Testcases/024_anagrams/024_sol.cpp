#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1");

    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        vi ca(26, 0), cb(26, 0);

        FOR(i, a.length()) ca[a[i]-'a']++;
        FOR(i, b.length()) cb[b[i]-'a']++;
        bool f = true;
        FOR(i, 26){
            if(ca[i] != cb[i]) f = false;
        }
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    fout.close();


	return 0;
}

