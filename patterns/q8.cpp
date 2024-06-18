// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// The dots represent spaces.
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
    cin>>N;
    int i=1;
    while(i<=N){
        int j=1;
        while(j<=N-i){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}