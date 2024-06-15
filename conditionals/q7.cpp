// Given a number N, print sum of all even numbers from 1 to N

#include<iostream>
using namespace std;

int main(){
    int N,i, sum;
    sum=0;
    cout<<"Enter the number till which you want the sum of even numbers."<<endl;
    cin>> N;
    for( i=0; i<=N ; i++){
        if( i%2 == 0){
            sum = sum + i;
        }
    }
    cout<<sum;
    return 0;
}