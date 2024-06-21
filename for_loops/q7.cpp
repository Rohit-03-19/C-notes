// Problem statement
// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).



// If C is equal to -
//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Line 1 : Integer N
// Line 2 : Choice C
// Output Format :
//  Sum or product according to user's choice
// Constraints :
// 1 <= N <= 12

#include <iostream>
using namespace std;

int main() {
    int N, C;
    cout << "Enter an integer N: ";
    cin >> N;
    cout << "Enter choice (1 for sum, 2 for product): ";
    cin >> C;

    if (C == 1) {
        // Compute the sum
        int sum = 0;
        for (int i = 1; i <= N; ++i) {
            sum += i;
        }
        cout << "Sum: " << sum << endl;
    } else if (C == 2) {
        // Compute the product
        long long product = 1;
        for (int i = 1; i <= N; ++i) {
            product *= i;
        }
        cout << "Product: " << product << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
