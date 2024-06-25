// Problem statement
// You have been provided with an empty array (ARR) and its size N. The user will only input the value of N, and you don't need to be concerned about the array itself.

// Your objective is to fill the array using integer values from 1 to N (inclusive), following the specific order: 1, 3, 5, ..., 6, 4, 2.

// Note:
// Printing the array is not required. Your task is solely to fill it.
// Detailed explanation ( Input/output format, Notes, Images )
// Input Format:
// The first line contains a single integer 'N'.
// Output Format :
//  First line contains the elements of the array separated by a single space.
// Constraints :
// 0 <= N <= 10^4
// Time Limit: 1sec


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    int value = 1;

    // Fill the array in the specified order
    for (int i = 0; i < N / 2; ++i) {
        arr[i] = value;
        value += 2;
    }
    value=N;
    // Fill the remaining positions in reverse order
    for (int i = N / 2; i < N; ++i) {
        arr[i] = value;
        value -= 2;
    }

    // Printing the elements of the array (optional)
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
