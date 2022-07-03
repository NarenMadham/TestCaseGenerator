#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t2.txt");
	ofstream fout;
	fout.open("o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = n - 1; i > 0; i--) {
			int M = 0;
			for (int j = 0; j <= i; j++) {
				if (arr[M] < arr[j]) {
					M = j;
				}
			}
			cout << M << " ";
			swap(arr[M], arr[i]);
		}
		cout << endl;
	}

	return 0;
}

