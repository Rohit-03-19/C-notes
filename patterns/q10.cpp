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
            cout<<k;
            k++;
        }
        int l=i-1;
        while(l>=1){
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}