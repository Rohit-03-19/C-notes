// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// 4444
// 4444
// 4444
// 4444

#include<iostream>
using namespace std;

int main(){
    int N,i,j;
    cout<<"Enter N"<<endl;
    cin>>N;
    i=0;
    while(i<=N){
        j=1;
        while(j<=N){
            cout<<N ;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}