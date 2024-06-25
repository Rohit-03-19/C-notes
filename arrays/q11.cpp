// Problem statement
// You are given the array ‘children’ of size ‘N’ representing the number of candies present at each child. You have a ‘extraCandies’ amount of candies. Your task is to find for each child if the child has the most candies among all children if all ‘extraCandies’ are given to the child.

// You have to fill the boolean array 'output' also of size 'N'. ‘True’ is present at position ‘index’ if the child at position ‘index’ will have the maximum amount of candies when given all the ‘extraCandies’ candies.

// For example:
// You are given ‘children’ = [12, 20, 5], and ‘extraCandies’ = ‘9’

// If you give all the candies to the child at position 1, the child will have 21 candies, which is the highest among all children.

// If you give all the candies to the child at position 2, the child will have 29 candies, which is the highest among all children.

// If you give all the candies to the child at position 3, the child will have 14 candies, which is not the highest among all children.

// Hence the answer is [True, True, False].
// Note:
// You don't have to print or return anything. You just have to fill the boolean values in output array as required.
// Detailed explanation ( Input/output format, Notes, Images )
// Input Format:
// The first line  contains two integers, ‘N’ and ‘extraCandies’, representing the number of children and extra candies.

// The second line contains ‘N’ space-separated integers, denoting the elements of the array ‘children’ where ‘children[index]’ represents the number of candies present at child at ‘index’ position.
// Output Format:
// First line of contain N 'boolean' values separated by a space.
// Constraints:
// 2 <= N <= 10^6
// 1 <= children[i] <= 10^9
// 1 <= extraCandies <= 10^9

// Time Limit: 1 sec


#include <iostream>
using namespace std;

void computeMaxCandies(bool output[], int children[], int N, int extraCandies) {
    // Find the maximum number of candies among all children
    int maxCandies = 0;
    for (int i = 0; i < N; ++i) {
        maxCandies = max(maxCandies, children[i]);
    }

    // Check if each child will have the maximum candies with extraCandies
    for (int i = 0; i < N; ++i) {
        output[i] = (children[i] + extraCandies >= maxCandies);
    }
}

int main() {
    int N, extraCandies;
    cin >> N >> extraCandies;

    int children[N];
    for (int i = 0; i < N; ++i) {
        cin >> children[i];
    }

    bool output[N];
    computeMaxCandies(output, children, N, extraCandies);

    // Print the boolean values in output array
    for (int i = 0; i < N; ++i) {
        cout << (output[i] ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}
