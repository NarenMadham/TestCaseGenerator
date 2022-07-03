#include "testlib.h"
#include <iostream>
#define endl "\n"
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define lll __uint128_t
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vll vector<ll>
#define pb push_back
#define sortasc(ar) sort(ar.begin(), ar.end())
#define sortdsc(ar) sort(ar.begin(), ar.end(), greater<ll>())
#define shuffle(ar) random_shuffle(ar.begin(), ar.end())

#define FOR(i, n) for(int i=0;i<n;i++)

#define umii unordered_map<int, int>
#define mii map<int, int>
#define usi unordered_set<int>
#define usll unordered_set<ll>
using namespace std;

// random_device rd;  //Will be used to obtain a seed for the random number engine
// mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()


/**
 *
 *
 *
 * ARRAYS
 * Helper functions for generating the testcases for the array related functions
 *
 *
 *
 *
*/

ll getRand(ll m = 1, ll M = 1000000000) {
	// uniform_int_distribution<> distrib(m, M);
	// return distrib(gen);
	return rnd.next(m, M + 1);
}

void increasingContigous(ofstream& fout, ll n, ll m = 1, ll M = 1e9) {
	fout << n << endl;
	for (ll i = m; i < (m + n); i++) {
		fout << i << " ";
	}
	fout << endl;
}

void decreasingContigous(ofstream& fout, ll n, ll m = 1, ll M = 1e9) {
	fout << n << endl;
	for (ll i = (m + n - 1); i >= m; i--) {
		fout << i << " ";
	}
	fout << endl;
}

void intervalShuffle(ofstream& fout, ll n, ll m = 1) {
	fout << n << endl;

	vll ar;
	for (ll i = m; i < (m + n); i++) {
		ar.push_back(i);
	}
	random_shuffle(ar.begin(), ar.end());
	FOR(i, ar.size()) fout << ar[i] << " ";
	fout << endl;
}


void increasingRandom(ofstream& fout, ll n, ll m = 1, ll M = 1e9) {
	fout << n << endl;
	vll ar;
	// usll s;
	FOR(i, n) {
		ll ele = getRand(m, M);
		ar.push_back(ele);
	}
	sortasc(ar);
	FOR(i, n) fout << ar[i] << " ";
	fout << endl;
}


void decreasingRandom(ofstream& fout, ll n, ll m = 1, ll M = 1e9) {
	fout << n << endl;
	vll ar;
	FOR(i, n) ar.push_back(getRand(m, M));
	sortdsc(ar);
	FOR(i, n) fout << ar[i] << " ";
	fout << endl;
}

void singleElementArray(ofstream& fout, ll n, ll ele = getRand(1, 1e9)) {
	fout << n << endl;
	FOR(i, n) fout << ele << " ";
	fout << endl;
}

void eleKTimesRepeat(ofstream& fout, ll n, ll k, ll m = 1, ll M = 1e9, bool sorted = false) {
	fout << n << endl;
	vll ar;
	FOR(i, (n / k)) {
		ll ele = getRand(m, M);
		FOR(j, k) ar.pb(ele);
	}
	if (!sorted) random_shuffle(ar.begin(), ar.end());
	else sortasc(ar);
	FOR(i, ar.size()) fout << ar[i] << " ";
	fout << endl;
}

void randomArray(ofstream& fout, ll n, ll m = 1, ll M = 1e9) {
	fout << n << endl;
	vll ar;
	FOR(i, n) ar.pb(getRand(m, M));
	shuffle(ar);
	FOR(i, n) fout << ar[i] << " ";
	fout << endl;
}

void maxTestCase(ofstream& fout, ll n, ll M = 1e9) {
	fout << n << endl;
	FOR(i, n) fout << M << " ";
	fout << endl;
}

void t1t2(ofstream& fout, ll n, int m, int M) {
	fout << 10 << endl;
	increasingRandom(fout, n, m, M);
	increasingContigous(fout, n, m, M);
	decreasingRandom(fout, n, m, M);
	decreasingContigous(fout, n, m, M);
	singleElementArray(fout, n);
	intervalShuffle(fout, n);
	int k = getRand(m, M);
	while (n % k != 0) k = getRand(m, n);
	eleKTimesRepeat(fout, n, k, false, m, M);
	randomArray(fout, n, m, M);
	randomArray(fout, n, m, M);
	randomArray(fout, n, m, M);
}

void singleNumber(ofstream& fout, ll n, ll m = 1, ll M = 1e9) {
	fout << n << endl;
	FOR(i, n) fout << getRand(m, M) << endl;
}

void nonRepeating(ofstream& fout, ll n, ll k, ll m = 1, ll M = 1e9, bool sorted = false) {
	fout << n << endl;
	--n;
	vll ar;
	usll s;
	FOR(i, (n / k)) {
		ll ele = getRand(m, M);
		while (s.find(ele) != s.end()) ele = getRand(m, M);
		FOR(j, k) ar.pb(ele);
		s.insert(ele);
	}
	int ans = getRand(m, M);
	while (s.find(ans) != s.end()) ans = getRand(m, M);
	ar.pb(ans);
	if (!sorted) shuffle(ar);
	else sortasc(ar);
	FOR(i, ar.size()) fout << ar[i] << " ";
	fout << endl;
}

void pairTestcases(ofstream& fout, ll n, ll m1, ll M1, ll m2, ll M2) {
	fout << n << endl;
	while (n--) {
		fout << getRand(m1, M1) << " "  << getRand(m2, M2) << endl;
	}
}


