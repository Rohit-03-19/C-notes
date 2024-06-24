// Problem statement
// Given an array of length N, you need to find and print the sum of all elements of the array.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10^6
// Note for C++:
// It is advisable to declare an array with a size that can accommodate all the elements, considering that N has a maximum value of 10^5.



#include<iostream>
using namespace std;

int main(){
    int a[100000];
    int sum,n,i;
    sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        sum=sum+a[j];
    }
    cout<<"sum is:-  "<<sum<<endl;
    return 0;
}