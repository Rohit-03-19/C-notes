#include <iostream>
using namespace std;

int main(){
    int n , i, j;
    cout<<"enter the number for which you want pattern"<<endl;
    cin>> n;
    i=1;

    while(i<=n){
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}