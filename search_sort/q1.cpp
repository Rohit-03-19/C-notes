// Problem statement
// You are given an integer array 'A' of size 'N', sorted in ascending order. You are also given an integer 'target'.

// Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. Otherwise, return -1.

// Example:
// Input: ‘N’ = 7 ‘target’ = 3
// ‘A’ = [1, 3, 7, 9, 11, 12, 45]

// Output: 1

// Explanation: For A = [1, 3, 7, 9, 11, 12, 45],
// The index of element '3' is 1.
// Hence, the answer is '1'.
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// The first line contains an Integer 'N', which denotes the size of the array/list.

// The second line contains 'N' single space-separated integers representing the elements in the array/list.

// The third line contains the value of 'target' to be searched for in the array/list.
// Output Format :
// Return the index at which 'target' is present for each test case, -1 otherwise.
// Constraints :
// 1 <= N <= 10^4
// 1 <= A[i] <= 10^9
// 1 <= target <= 10^9
// Time Limit: 1 sec


#include<iostream>
using namespace std;

void search(int arr[] , int n , int target ){
    int start=0;
    int mid=0;
    int end=n-1;
    int m=target;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==m){
            cout<<"the position is:- "<<mid<<endl;
            break;
        }
        else if(arr[mid]<m){
            start=mid+1;
            mid=(start+end)/2;
        }
        else if(arr[mid]>m){
            end=mid-1;
            mid=(start+end)/2;
        }
        else if(start>end){
            cout<<"number is not present or";
            break;
        }
        else{
            cout<<"wrong input"<<endl;
        }
    }

}

int main(){
    int n;
    int arr[100000];
    int target;
    cout<<"enter how many elements should be present :- "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"enter the number to be searched :- "<<endl;
    cin>>target;
    search(arr , n , target);

    return 0;
}