// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.



// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N
// Output format :
// Corresponding reverse number
// Constraints:
// 0 <= N < 10^8


#include<iostream>
using namespace std;

int main(){
    int n,a;
    cout<<"enter the number for which you want the reverse:-"<<endl;
    cin>>n;
    a=0;
    while(n!=0){
        a=a*10 + n%10;
        n=n/10;
    }
    cout<<"reverse of the number entered is "<< a<<endl;
    return 0;
}