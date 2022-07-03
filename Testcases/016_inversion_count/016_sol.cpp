#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout

using namespace std;


void merge(int arr[], int l, int m, int h, ll& count) {
	int n1 = m - l + 1;
	int n2 = h - m;
	int L[n1], R[n2];
	for (int i = 0; i < n1; i++) {
		L[i] = arr[l + i];
	}
	for (int j = 0; j < n2; j++) {
		R[j] = arr[m + j + 1];
	}
	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
			k++;
		} else {
			count += (n1 - i);
			arr[k] = R[j];
			j++;
			k++;
		}
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergesort(int arr[], int l, int h, ll& count) {
	if (l < h) {
		int mid = l + (h - l) / 2;
		mergesort(arr, l, mid, count);
		mergesort(arr, mid + 1, h, count);
		merge(arr, l, mid, h, count);
	}
}

int main() {
	ifstream fin("t4.txt");
	ofstream fout;
	fout.open("o4.txt");
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		ll count = 0;
		mergesort(arr, 0, n - 1, count);
		// for(int i=0;i<n;i++){
		//     cout<<arr[i]<<" ";
		// }
		// cout<<endl;
		cout << count << endl;
	}
	return 0;
}