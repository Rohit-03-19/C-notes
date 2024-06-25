// Problem statement
// You are given two numbers 'arr1' and 'arr2' in the form of two arrays (arr1[] and arr2[]) both of lengths 'N'. You have given a third array 'arr3' also with length 'N'. You have store the corresponding sum of elements from arr1 and arr2 in arr3 corresponding element.

// Note:

// You will be given a function with N, arr1 and arr2 and arr3 as parameters. You just have to fill the arr3 as required.
// Detailed explanation ( Input/output format, Notes, Images )
// Input Format:
// First line of input contains the length 'N' of arrays.
// Next 2 Lines contains N elements separated by space
// Line 1: arr1
// Line 2: arr2
// Output Format:
// N space integer denoting the elements in arr3.
// constraints:
// 1<=N<=1000
// 1<=arr1[i],arr2[i]<=1000


#include <iostream>
using namespace std;

void computeSumArrays(int arr1[], int arr2[], int arr3[], int N) {
    for (int i = 0; i < N; ++i) {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int N;
    cin >> N;

    int arr1[N], arr2[N], arr3[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr1[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> arr2[i];
    }

    // Compute the sum of corresponding elements
    computeSumArrays(arr1, arr2, arr3, N);

    // Print the elements of arr3
    for (int i = 0; i < N; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
