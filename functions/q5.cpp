// Problem statement
// You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.


// An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// The first line of the input contains an integer 'n'.


// Output Format :
// Return 'true' or 'false' as mentioned in the problem statement.


// Note
// You don't need to print anything, just implement the given function. "true" will be printed if the returned value is a boolean 'true' and "false" otherwise.


#include <iostream>
#include <cmath> 
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int numDigits = 0;
    int sum = 0;

    while (n > 0) {
        n /= 10;
        numDigits++;
    }

    n = original;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cin >> n;

    bool result = isArmstrong(n);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
