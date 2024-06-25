// Problem statement
// Print the following pattern for the given number of rows.

// Pattern for N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 26


#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    for (int i=1; i<=N;i++){
        for(int j=i; j>0;j--){
            cout<<char(64+N-j);
        }
        cout<<endl;
    }
    return 0;
}