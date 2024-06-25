// Problem statement
// You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array.

// You don't need to print or return anything, just change in the input array itself.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// First line of contains an integer 'N' representing the size of the array.

// Second line contains 'N' single space separated integers representing the elements in the array.
// Output Format :
// First line contains the elements of the resulting array in a single row separated by a single space.
// Constraints :
// 0 <= N <= 10^5
// Time Limit: 1sec

#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

void swapAlternateElements(int arr[], int N) {
    for (int i = 0; i < N - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Swap alternate elements
    swapAlternateElements(arr, N);

    // Print the modified array
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
