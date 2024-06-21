// Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).

// Print the prime numbers in different lines.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// Integer N
// Output Format :
// Prime numbers in different lines
// Constraints :
// 1 <= N <= 100

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter an integer N: ";
    cin >> N;

    for (int num = 2; num <= N; ++num) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << endl;
        }
    }

    return 0;
}
