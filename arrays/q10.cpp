// Problem statement
// For Array A of size n, the prefix sum of A is another array P of size n+1, where P[i] represents the sum of the first i elements of A. That is,

// P[0] = A[0]
// P[1] = A[0] + A[1]
// P[2] = A[0] + A[1] + A[2]
// ...
// P[n-1] = A[0] + A[1] + ... + A[n-1]
// You will given an array arr of length n along with an output array of the same length. Your objective is to populate the output array as required, without the need to print or return anything.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format:
// First line of the input contains the size 'N' of the array arr.
// Next line contains N integers separated by a single space. 
// Output Format:
// Output contains N integers representing Prefix sums array i.e. 'output' array.
// Constraints:
// 1<=N<=10000
// 0<=arr[i]<=10000

#include <iostream>
using namespace std;

void computePrefixSum(int arr[], int output[], int N) {
    output[0] = arr[0]; // Initialize the first element of the prefix sum array

    for (int i = 1; i < N; ++i) {
        output[i] = output[i - 1] + arr[i]; // Compute cumulative sum
    }
}

int main() {
    int N;
    cin >> N;

    int arr[N], output[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Compute the prefix sum array
    computePrefixSum(arr, output, N);

    // Print the elements of the prefix sum array
    for (int i = 0; i < N; ++i) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
