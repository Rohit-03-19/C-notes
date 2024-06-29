// Problem statement
// You have a list of numbers that are not in order. You want to find the sum of the differences between the indices of pairs of numbers that are in the wrong order. A pair of numbers is considered to be in the wrong order if the smaller number comes after the larger number in the list.

// Example:
// Input: ‘N’ = 5 
// ‘A’ = [3, 2, 11, 5, 1]

// Output: 6
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// The first line of input contains an integer ‘N’, denoting the size of the array/list. The second line contains ‘N’ single space-separated integers representing the elements in the array/list.
// Output Format :
// The output should be a single integer - the number of inversions in the array/list.
// Constraints :
// 1 <= N <= 10^4
// 1 <= nums[i] <= 10^9
// Time Limit: 1 sec


#include<iostream>
using namespace std;

void inversion(int a[], int n){
    int sum=0;
    for(int i=0 ; i<n ; i++ ){
        int min=a[i], minindex=i;
        for(int j=i ; j<n ; j++){
            if(a[j]<min){
                min=a[j];
                minindex=j;
            }
        }
        int temp=a[i];
        a[i]=a[minindex];
        a[minindex]=temp;
        sum=sum+ (minindex-i);
    }
    cout<<"The sorted array is"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<"the ineversion is:- "<<sum<<endl;
}

int main(){
    int n;
    int a[100000];
    cout<<"Enter number of elements you want:- "<<endl;
    cin>>n;
    cout<<"Enter the elements of array:- "<<endl;
    for(int i = 0 ; i<n ; i++ ){
        cin>>a[i];
    }
    cout<<endl;
    inversion( a , n);
    return 0;
}