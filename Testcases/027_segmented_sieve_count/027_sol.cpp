#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;

int segmentedSieve(long long L, long long R) {
	// generate all primes up to sqrt(R)
	long long lim = sqrt(R);
	vc mark(lim + 1, false);
	vll primes;
	for (long long i = 2; i <= lim; ++i) {
		if (!mark[i]) {
			primes.emplace_back(i);
			for (long long j = i * i; j <= lim; j += i)
				mark[j] = true;
		}
	}

	vc isPrime(R - L + 1, true);
	for (long long i : primes)
		for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
			isPrime[j - L] = false;
	if (L == 1)
		isPrime[0] = false;

	int res = 0;
	FOR(i, isPrime.size()) if (isPrime[i]) ++res;
	return res;

}

int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		cout << segmentedSieve(a, b) << endl;
	}


	return 0;
}

