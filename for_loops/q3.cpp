// Problem statement
// Write a program to find the Nth Fibonacci number using loops.



// Note :
// The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding ones, usually starting with first_number  and Second_number . 
// First_number and Second_number in this question will be 1 . Soo that the resultant series will be 1, 1, 2, 3, 5, 8 ...
// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// The first line of each test case contains an Integer number ‘N’.
// Output Format :
// For each test case, print its equivalent Fibonacci number.
// Constraints:
// 1 <= N <= 10000     
// Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.

#include<iostream>
using namespace std;

int main(){
    int n,k=0,l=1;
    cin>>n;
    for(int i=0;i<=n;i++){
        int j= k + l;
        k=l;
        l=j;
        cout<<k<<" ";

    }
    return 0;
}