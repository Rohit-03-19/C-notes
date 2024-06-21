// Given a number N, find its square root. You need to find and print only the integral part of square root of N.

// For eg. if number given is 18, answer is 4.

// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N
// Output Format :
// Square root of N (integer part only)
// Constraints :
// 0 <= N <= 10^8

#include <iostream>
using namespace std;


int main() {
    int N;
    cin >> N;

    int ans = 0;
    for (int i = 1; i * i <= N; ++i) {
        ans = i;
    }

    cout << ans << endl;

    return 0;
}

