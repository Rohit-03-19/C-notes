// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 3
//  A
//  BB
//  CCC
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 26


#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int i=1;
    while(i<=N){
        int j=1;
        while(j<=i){
            cout<<(char)(64+i);
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;

}