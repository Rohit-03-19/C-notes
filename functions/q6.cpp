// Problem statement
// Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.



// For example:
// 'N' = 5.
// The divisors of 5 are 1, 5.
// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// The input consists of a single line containing an integer, ‘N’.
// Output Format :
// The output should be a single line containing the divisors of ‘N’, separated by spaces, in ascending order.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << "Divisors of " << N << ": ";
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
