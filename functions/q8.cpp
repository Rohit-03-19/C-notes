// Problem statement
// Your task is to write a function named print_composite that prints if there are any composite numbers up to a given number, n.



// Composite numbers are positive integers greater than 1 that have more than two positive divisors. In other words, a composite number has factors other than 1 and itself.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format:
// The function takes an integer n as input, which represents the upper limit of the range to check for composite numbers.
// Output Format:
// The function should print all the composite numbers up to n if numbers are found within the range from 2 to n (inclusive).

#include <iostream>
using namespace std;

bool isComposite(int num) {
    if (num <= 1)
        return false; 

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return true;
    }

    return false;
}

void printComposite(int n) {
    cout << "Composite numbers up to " << n << ": ";
    for (int i = 2; i <= n; ++i) {
        if (isComposite(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    printComposite(n);

    return 0;
}
