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


#include<iostream>
using namespace std;

void closest(int a[], int n, int target){
    int start=0,end=n-1,mid=0;
    int left=0,right=target;
    while(start<=end){
        mid=(start+end)/2;
        if(a[mid]==target){
            cout<<"The positon is:- "<<mid<<endl;
            break;
        }
        else if(a[mid]<target){
            start=mid+1;
            mid=(start+end)/2;
            left=a[start];
            if(left<target){
                cout<<"The positon is:- "<<start;
            }
        }
        else if(a[mid]>target){
            end=mid-1;
            mid=(start+end)/2;
        }
    }
}

int main(){
    int n;
    int target;
    int a[100000];
    cout<<"Enter nuber of elements array contain"<<endl;
    cin>>n;
    cout<<"Enter the values of array:- "<<endl;
    for(int i= 0; i<n ;i++){
        cin>>a[i];
    }
    cout<<"enter the target value:- "<<endl;
    cin>>target;
    closest(a , n ,target );

}