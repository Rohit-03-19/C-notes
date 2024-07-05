#include<iostream>
using namespace std;

int main(){
    int a=1, b=2;
    // a=10;
    // if(++a){
    //     cout<<b;
    // }
    // else{
    //     cout<<++b;
    // }
    // if(a-->0 || ++b>2){
    //     cout<<"Stage-1-inside if";
    // }
    // else{
    //     cout<<"Stage2- inside else";
    // }
    // cout<<a<< " "<<b<<endl; 
    // int number = 3;
    // cout << (25*(++number));
    // // return 0;
    // for(int i=0 ; i<5 ;i++ ){
    //     cout<<i<<" "<<endl;
    //     i++;
    // }
    // for(int i=0 ; i<=15 ; i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }
    for(int i=0 ; i<5 ; i++){
        for( int j=i;  j<=5 ;j++){
            if(i+j==10){
                break;
            }
            cout<< i<<" "<<j<<endl;
        }
    }
}