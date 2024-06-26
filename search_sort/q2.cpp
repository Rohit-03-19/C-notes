// Problem statement
// You have been given a sorted(in ascending order) integer array/list('nums') of size N and an element 'target'. Your task is to return the index of closest element to the 'target' in the array 'nums'.

// Example:
// Input: ‘N’ = 7 ‘target’ = 4
// ‘A’ = [1, 3, 7, 9, 11, 12, 45]

// Output: 1

// Explanation: For nums = [1, 3, 7, 9, 11, 12, 45],
// The element 3 is closest to the target element , so we will return the index of 3.
// Hence, the answer is '1'.
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// The first line contains an Integer 'N', which denotes the size of the array/list.

// The second line contains 'N' single space-separated integers representing the elements in the array/list.

// The third line contains the value of 'target' to be searched for in the array/list.
// Output Format :
// Return the index closest or at which 'target' is present for each test case.
// Constraints :
// 1 <= N <= 10^4
// 1 <= nums[i] <= 10^9
// 1 <= target <= 10^9
// Time Limit: 1 sec


#include<cmath>
#include <climits>

int binarySearchClosest(int arr[], int left, int right, int target)
{
    //Write your code here
    int closestIndex = -1;
    int minDiff = INT_MAX;

    // Perform binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Update closest element and minimum difference if the current element is closer to the target
        int diff = abs(arr[mid] - target);
        if (diff < minDiff) {
            minDiff = diff;
            closestIndex = mid;
        }

        // If the current element is less than the target, move right
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the current element is greater than the target, move left
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        // If the current element is equal to the target, return its index
        else {
            return mid;
        }
    }

    return closestIndex;
}