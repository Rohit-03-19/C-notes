// Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer x
// Output format :
// Terms of series (separated by space)
// Constraints :
// 1 <= x <= 1,000


#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int count = 0; // Number of terms printed
    int N = 1;     // Start with N = 1

    while (count < x) {
        int term = 3 * N + 2;
        if (term % 4 != 0) {
            cout << term << " ";
            count++;
        }
        N++;
    }

    return 0;
}
