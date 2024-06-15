// Write a program that generates a multiplication table for a given integer.


#include<iostream>
using namespace std;

int main(){
    int a ,i ;
    cout<<"enter the number for which you want the multiple"<< endl;
    cin>> a ;
    i = 1;
    while( i <= 10){
        cout<< a << "  *  " << i << "  =  " <<i*a << endl ;
        i++;
    }
    return 0;
}