// Create a function that determines whether a given number N belongs to the Fibonacci sequence. If N is found in the Fibonacci sequence, the function should return true; otherwise, it should return false.



// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// Integer N
// Output Format :
// true or false

#include <iostream>
using namespace std;

void check(int a){
    int a1=0,a2=1,fib=0;
    int b=1;
    while(b=1){
        fib=a1+a2;
        a1=a2;
        a2=fib;
        if(fib==a){
            cout<<"True";
            break;
        }
        else {
            cout<<"False";
            break;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number you want to check that it is present in fibonacci series or not:-";
    cin>>n;
    check(n);
    return 0;
}