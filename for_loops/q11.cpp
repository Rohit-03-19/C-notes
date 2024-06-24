// Problem statement
// Given a decimal number (integer N), convert it into binary and print.

// Note for C++ coders:
// Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types. 
// The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java. 


// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N
// Output format :
// Corresponding Binary number (long)
// Constraints :
// 0 <= N <= 10^5


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long binary = 0;
    long position = 1; // Represents the position value (1, 10, 100, 1000, ...)

    while (N > 0) {
        int remainder = N % 2;
        binary += remainder * position;
        N /= 2;
        position *= 10;
    }
    cout << binary << endl;

    return 0;
}
