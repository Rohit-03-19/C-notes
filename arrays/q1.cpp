// Problem statement
// Write a program that returns minimum element in an array.

// Hint : the Math.min method is used to find the minimum of two numbers .

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format:
// First line input contains and integer N
// Next line contains N integers separated by space.
// Output Format:
// First line of output prints the minimum element in the array.
// Constraints:
// 1<=N<=10^5
// Note for C++:
// It is advisable to declare an array with a size that can accommodate all the elements, considering that N has a maximum value of 10^5.


#include<iostream>
using namespace std;

int main(){
    int n,min;
    int arr[100000];
    cin>>n;
    for( int i=0; i<n;i++){
        cin>>arr[i];
    }
    min=999999;
    for(int j=0;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
        }
    }
    cout<<"min is :- "<<min<<endl;
    return 0;
}