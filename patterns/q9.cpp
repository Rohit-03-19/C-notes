// // Print the following pattern for the given N number of rows.

// Pattern for N = 4
// 4444
// 333
// 22
// 1
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int i=0;
    while(i<=n){
        int j=n;
        while(j>i){
            cout<<n-i;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}