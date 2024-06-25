// Problem statement
// You have been given an integer array(ARR) of size N.

// Now, in the given array, all numbers are present twice or more than twice except only one number is present only once.

// You need to find and return that number which is unique in the array.

//  Note:
// Unique element is always present in the array according to the given condition.
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// First line contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array.
// Output Format :
//  First line contains the unique element present in the array.
// Constraints :
// 0 <= N <= 10^3
// Time Limit: 1 sec

#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int N) {
    int unique = 0;
    for (int i = 0; i < N; ++i) {
        unique ^= arr[i];
    }
    return unique;
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int result = findUniqueElement(arr, N);
    cout << result << endl;

    return 0;
}
