

#include<iostream>
using namespace std;

void sort(int a[],int n){
    for(int i=0; i<n; i++){
        int min=a[i];
        int minindex=i;
        for(int j=i; j<n ; j++){
            if(a[j]<min){
                min=a[j];
                minindex=j;
            }
        }
        int temp= a[i];
        a[i]=a[minindex];
        a[minindex]=temp;
    }
    cout<<"Your sorted array is"<<endl;
    for (int i = 0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    int a[100000];
    cout<<"Enter the number of elements you want:- "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0; i<n ; i++){
        
        cin>>a[i];
    }

    sort(a, n);
    return 0;
}