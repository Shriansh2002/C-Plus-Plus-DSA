// Kth Smallest and Largest Element of Array

#include <bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	vector<int> v;
	sort(arr.begin(), arr.end());

	int x = arr[k-1];
	int y = arr[n-k];

	v.push_back(x);
	v.push_back(y);

	return v;
}
