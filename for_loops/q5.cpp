// Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

// That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.

// Print count of characters, count of digits and count of white spaces respectively (separated by space).

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// A stream of characters terminated by '$'
// Output Format :
// 3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)


#include <iostream>
using namespace std;

int main() {
    char ch;
    int charCount = 0, digitCount = 0, spaceCount = 0;

    cout << "Enter characters (terminate with '$'): ";
    while (cin >> ch && ch != '$') {
        if (islower(ch)) {
            charCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        } else if (isspace(ch)) {
            spaceCount++;
        }
    }

    cout << "Character count: " << charCount << endl;
    cout << "Digit count: " << digitCount << endl;
    cout << "Whitespace count: " << spaceCount << endl;

    return 0;
}
