#include <bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main()
{
    ifstream fin("t2.txt");
    ofstream fout;
    fout.open("o2.txt");
    ll N = 2e5 + 1, M = 1e9 + 7;
    vll pow1(N), pow2(N);
    ll p1 = 883, p2 = 983;
    pow1[0] = p1;
    pow2[0] = p2;

    for (int i = 1; i < N; i++)
        pow1[i] = (pow1[i - 1] * p1) % M;
    for (int i = 1; i < N; i++)
        pow2[i] = (pow2[i - 1] * p2) % M;

    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin>>a>>b;
        int n (a.length()), m(b.length());
        ll ha1(0), ha2(0), hb1(0), hb2(0);
        
        FOR(i, m){
            hb1 = (hb1 + (b[i] * pow1[i]) % M) % M;
            hb2 = (hb2 + (b[i] * pow2[i]) % M) % M;
            ha1 = (ha1 + (a[i] * pow1[i]) % M) % M;
            ha2 = (ha2 + (a[i] * pow2[i]) % M) % M;
        }
        bool f = false;
        if((ha1 == hb1) && (ha2 == hb2)){
            f = true;
        }

        for(int i=m;i<n;i++){
            ha1 = (ha1 - ((a[i-m] * pow1[i-m]) % M) + M) % M;
            ha1 = (ha1 + (a[i] * pow1[i]) % M ) % M;
            ha2 = (ha2 - ((a[i-m] * pow2[i-m]) % M) + M) % M;
            ha2 = (ha2 + (a[i] * pow2[i]) % M ) % M;
            hb1 = (hb1 * p1) % M;
            hb2 = (hb2 * p2) % M;
            
            if((ha1 == hb1) && (ha2 == hb2)){
                f = true;
                break;
            }   
        }
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   

    return 0;
}