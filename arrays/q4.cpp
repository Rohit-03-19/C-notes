#include<iostream>
using namespace std;

void printarray(int b[]){
    cout<<"function : "<<sizeof(b)<<endl;

}


int main(){
    int n;
    cin>>n;
    int b[100];
    cout<<b<<endl;
    for(int i=0; i <n;i++){
        cin>>b[i]; 
    }
    cout<<"main : " <<sizeof(b)<<endl;
    printarray(b);
    return 0;
}