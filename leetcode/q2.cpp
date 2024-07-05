// Write a function that takes an unsigned integer as an input and return the number of '1' bits present in that unsigned integer

#include<iostream>
using namespace std;

int main(){
    unsigned int n;
    cout<<"Enter the unsigned inetger :- ";
    cin>>n;
    int sum=0;
    while(n!=0){
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}