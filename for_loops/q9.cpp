// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.



// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N
// Output format :
// Corresponding reverse number
// Constraints:
// 0 <= N < 10^8

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter an integer N: ";
    cin >> N;

    int reverse = 0;
    while (N > 0) {
        int digit = N % 10;
        reverse = reverse * 10 + digit;
        N /= 10;
    }

    cout << "Reverse number: " << reverse << endl;

    return 0;
}
