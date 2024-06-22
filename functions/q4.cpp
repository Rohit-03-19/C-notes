// Problem statement
// Check whether a given number ’n’ is a palindrome number.

// Note :
// Palindrome numbers are the numbers that don't change when reversed.
// You don’t need to print anything. Just implement the given function.
// Example:
// Input: 'n' = 51415
// Output: true
// Explanation: On reversing, 51415 gives 51415.
// Detailed explanation ( Input/output format, Notes, Images )
// Input Format:
// The first and only line of the input contains the number 'n'.
// Output format:
// Return a boolean value True or False.

#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int n;
    cin >> n;

    bool result = isPalindrome(n);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
