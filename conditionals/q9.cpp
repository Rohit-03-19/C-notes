// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.

// Note : For this question, you can assume that 0 raised to the power of 0 is 1



// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Two integers x and n (separated by space)
// Output Format :
// x^n (i.e. x raise to the power n)
// Constraints:
// 0 <= x <= 8 
// 0 <= n <= 9

#include<iostream>
using namespace std;

int main(){
    int x,i,y,n;
    cout<< "Enter the values for X and N" << endl;
    cin>> x >> n ;
    if ( x== 0 && n == 0 ){
        cout<< "For x^n" << x<<"^"<<n<<"output is 1 "<<endl;
    }
    i=1;
    y=x;
    while(i<n){
        y=y*x;
        i++;
    }
    cout<< y;
    return 0;
}