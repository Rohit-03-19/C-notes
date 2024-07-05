// Give an integer number n, return the difference between the product of the digits and the sum of the digits 

#include<iostream>
using namespace std;

int subtract(int n){
    int prod=1, sum=0;
    while(n!=0){
        prod= prod * (n%10);
        sum=sum+ (n%10);
        n=n/10;
    }
    int diff=prod-sum;
    return diff;
}
int main(){
    int n;
    cout<<"Enter the integer:- ";
    cin>> n;
    int diff=subtract(n);
    cout<<diff;
    return 0;
}