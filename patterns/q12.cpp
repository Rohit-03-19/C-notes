// Problem statement
// Print the following pattern for the given number of rows.

// Pattern for N = 4



// The dots represent spaces.




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
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>i){
            cout<<" ";
            j--;
        }
        int k=0;
        while(k<i){
            cout<<k+i;
            k++;
        }
        k=i;
        while(k>1){
            cout<<k+i-2;
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}