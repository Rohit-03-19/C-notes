// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// 1
// 21
// 321
// 4321
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 50


#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the value of N"<<endl;
    cin>>N;
    int i=0;
    for (i ; i<=N;i++){
        for(int j=i; j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}