// Problem statement
// Print the following pattern

// Pattern for N = 4




// Hint
// As taught in the video, you just have to modify the code so that instead of printing numbers, it should output stars ('*').
// The dots represent spaces.




// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// N (Total no. of rows)
// Output Format :
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
        // int k=1;
        // while(k<=i){
        //     cout<<"*";
        //     k++;
        // }
        // k=i-1;
        // while(k>=1){
        //     cout<<"*";
        //     k--;
        // }
        cout<<endl;
        i++;
    }
    return 0;
}