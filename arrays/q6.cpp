// Problem statement
// Create a program that takes an array and its size as inputs and calculates the sum of the corresponding elements. The resulting sums should be stored in an output array.

// For example, given an array Arr = {1, 2, 3, 5}, the first element corresponds to the fourth element, so the sum should be stored in output[0] = 6. Similarly, the second element corresponds to the third element, so the sum should be stored in output[1] = 5. The output array should be filled up to half of the size of the input array. It is not necessary to handle cases where the input array has an odd number of elements because the size of the array is always even.

// Detailed explanation ( Input/output format, Notes, Images )
// Input format:
// First line of the input contains the size 'N' of the array arr.
// Next line contains N integers separated by a single space.
// Output Format:
// Output contains N/2 corresponding pair sums separated by a single space.
// Constraints:
// 1<=N<=10000
// 0<=arr[i]<=10000

#include<iostream>
using namespace std;
void pairadd(int o[] , int b){
    int sum=0;
    int c[100000];
    for(int i=0 ; i <b ; i++) {
        sum= o[i] + o[b-1-i];
        c[i]=sum;
    }
    for(int j=0 ; j<(b/2) ; j++){
        cout<<c[j]<<" ";
    }
}

int main(){
    int n;
    int a[100000];
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>a[i];
    }
    pairadd(a, n);
    return 0;
}