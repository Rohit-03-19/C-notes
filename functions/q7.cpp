// Given two values, n and r, write a function to calculate the permutation (nPr) for n ≥ r ≥ 0. The function should return -1 if n < r or if n or r are negative. The program should include two functions: one to calculate the factorial of a number and another to calculate the permutation.
// Function Input:
// n (int): The total number of objects.
// r (int): The number of objects taken at a time for the permutation.
// Output:
// The function will return the calculated permutation (nPr) in integer format. 
// Handle input cases where r is greater than n. The function will return "please enter n >= r >= 0".

#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
long long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

// Function to calculate the permutation (nPr)
long long permutation(int n, int r) {
    if (n < r || n < 0 || r < 0)
        return -1; // Invalid input

    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    cin >> n >> r;

    long long result = permutation(n, r);
    if (result == -1)
        cout << "Please enter n >= r >= 0" << endl;
    else
        cout << "Permutation (nPr): " << result << endl;

    return 0;
}
