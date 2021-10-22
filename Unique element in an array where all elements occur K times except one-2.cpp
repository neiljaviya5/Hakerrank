// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function that find the unique element
// in the array arr[]
int findUniqueElements(int arr[], int N,
					int K)
{
	// Store all unique element in set
	unordered_set<int> s(arr, arr + N);

	// Sum of all element of the array
	int arr_sum = accumulate(arr, arr + N, 0);

	// Sum of element in the set
	int set_sum = accumulate(s.begin(),
							s.end(),
							0);

	// Print the unique element using formula
	cout << (K * set_sum - arr_sum) / (K - 1);
}

// Driver Code
int main()
{

	int arr[] = { 12, 1, 12, 3, 12, 1,
				1, 2, 3, 2, 2, 3, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int K = 3;

	// Function call
	findUniqueElements(arr, N, K);

	return 0;
}
