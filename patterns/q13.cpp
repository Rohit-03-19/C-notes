// Problem statement
// Print the following pattern for the given number of rows.

// Note: N is always odd.
// Pattern for N = 5

// The dots represent spaces.


// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// N (Total no. of rows and can only be odd)
// Output format :
// Pattern in N lines
// Constraints :
// 1 <= N <= 49

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
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        k=i-1;
        while(k>=1){
            cout<<"*";
            k--;
        }
        cout<<endl;
        i++;
    }
    int m=1;
    while(m<=n){
        int a=1;
        while(a<=m){
            cout<<" ";
            a++;
        }
        int l=n;
        while(l>m){
            cout<<"*";
            l--;
        }
        int g=n-1;
        while(g>m){
            cout<<"*";
            g--;
        }
        cout<<endl;
        m++;
    }



    return 0;
}