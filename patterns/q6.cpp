// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// A
// BC
// CDE
// DEFG
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 13


#include<iostream>
using namespace std;

int main(){
    int N,i=1,j=1;
    cin>>N;
    for (i;i<=N;i++){
        for(j=1;j<=i;j++){
            cout<<(char)(64+i+j);
        }
        cout<<endl;
    }
    return 0;
}