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
    return 0;
}
