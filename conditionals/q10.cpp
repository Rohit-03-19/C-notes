// Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.



// Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

// Constraints
// 0<= 'n' <=10000


// Example :
// Input: 'n' = 132456

// Output: 12 9

// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9
// Constraints
// 0<= 'n' <=10000


#include<iostream>
using namespace std;
 int main(){
    int n , a, even_sum , odd_sum;
    cout<< "Enter the number"<<endl;
    cin>> n;
    even_sum=0;
    odd_sum=0;
    while(n!=0){
        a = n % 10 ;
        if ( a%2 == 0){
            even_sum=even_sum + a;
        }
        else if(a%2 !=0){
            odd_sum= odd_sum + a;
        }
        else{
            cout<<"wrong output"<<endl;
        }
        n=n/10;
    }
    cout<<"Sum of even numbers is"<<even_sum<<endl;
    cout<<"Sum of odd numbers is"<<odd_sum << endl;;
    return 0;
    
 }