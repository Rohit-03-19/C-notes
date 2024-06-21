// Given a binary number as an integer N, convert it into decimal and print.

// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// An integer N in the Binary Format
// Output format :
// Corresponding Decimal number (as integer)
// Constraints :
// 0 <= N <= 10^9

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a binary number: ";
    cin >> N;

    int decimal = 0;
    int base = 1; // Represents 2^0

    while (N > 0) {
        int digit = N % 10;
        decimal += digit * base;
        base *= 2;
        N /= 10;
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
