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
		for (int i = 1; i < n; i++) {
			int j;
			for (j = i; j > 0; j--) {
				if (arr[j] < arr[j - 1]) {
					swap(arr[j], arr[j - 1]);
				}
				else {
					break;
				}
			}
			cout << j << " ";
		}
		cout << endl;
	}


	return 0;
}

