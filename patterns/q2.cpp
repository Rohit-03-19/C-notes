// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// *
// **
// ***
// ****
// Note : There are no spaces between the stars (*).
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints
// 0 <= N <= 50

#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter N"<<endl;
    cin>>N;
    int i=0;
    while(i<=N){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }  
    return 0; 
}