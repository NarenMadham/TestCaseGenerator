#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;

int partition(vi& arr, int l, int r)
{
	int x = arr[r], i = l;
	for (int j = l; j <= r - 1; j++) {
		if (arr[j] <= x) {
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[r]);
	return i;
}

int kthSmallest(vi& arr, int l, int r, int k)
{
	if (k > 0 && k <= r - l + 1) {

		int index = partition(arr, l, r);

		if (index - l == k - 1)
			return arr[index];

		if (index - l > k - 1)
			return kthSmallest(arr, l, index - 1, k);

		return kthSmallest(arr, index + 1, r,
		                   k - index + l - 1);
	}

	return INT_MAX;
}


int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		cout << kthSmallest(ar, 0, n - 1, k) << endl;
	}


	return 0;
}

