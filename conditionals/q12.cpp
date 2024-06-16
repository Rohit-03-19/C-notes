// Write a program that takes a number as input and prints all its factors except 1 and the number itself.. If the number has only two factors (1 and the number itself), then the program should print -1.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// A single integer, n
// Output Format :
// All the factors of n excluding 1 and the number itself
// Constraints :
// 0 <= n <= 10,000


#include<iostream>
using namespace std;

int main(){
    int n, a=0;
    cout<<"Enter the number" << endl;
    cin>>n;
    for(int i=2 ; i<n;i++){
        if(n%i==0){
            cout<<i<<" " ;
            a++;
        }
    }
    if(a==0){
        cout<<"-1"<<endl;
    }
    return 0;
}