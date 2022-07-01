#include<bits/stdc++.h>
#define endl "\n"
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define lll __uint128_t
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vll vector<ll>
#define sort(ar) sort(ar.begin(), ar.end())
 
#define FOR(i, n) for(int i=0;i<n;i++)
 
#define umii unordered_map<int, int>
#define usi unordered_set<int>
#define mii map<int, int>
using namespace std;

void increasingContigous(ofstream& fout, int n, ll m = 1){
	fout << n << endl;
	for(ll i=m; i< (m+n);i++){
		fout << i << " ";
	}
	fout << endl;
}

void increasingContigousShuffle(ofstream& fout, int n, ll m = 1){
	fout << n << endl;
	vi ar;
	for(ll i=m; i< (m+n);i++){
		ar.push_back(i);
	}
	random_shuffle(ar.begin(), ar.end());
	FOR(i, ar.size()) fout << ar[i] << " ";
	fout << endl;
}

void increasingRandom(ofstream& fout, int n, ll m = 0){
	fout << n << endl;
	vi ar;
	FOR(i, n) ar.push_back(rand());
	sort(ar);
	FOR(i, n) fout << ar[i] << " ";
	fout << endl; 
}