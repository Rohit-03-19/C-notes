// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// 1
// 22
// 333
// 4444
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
    cout<<"Enter value of N"<<endl;
    cin>>N;
    int i=0;
    while(i<=N){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

