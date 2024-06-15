//     // Given three positive integers as X, Y and Z representing three sides of a triangle, write a program that determines whether the triangle formed by the sides exist or not. If the triangle exists, classify it as isosceles, scalene or equilateral.

// Condition for valid Triangle:
// Sum of any two of its sides should be greater than the third side

#include<iostream>
using namespace std;

int main(){
    int x,y,z;

    cin>> x >> y >> z;
    if(x+y>z && y+z>x && x+z>y ){
        cout<<"triangle is possible"<< endl ;
        if(x==y && y==z){
            cout<<"triangle is equilateral"<< endl;
        }
        else if(x!=y && y!=z && x!=z){
            cout<<"triangle is scalene"<< endl;
        }
        else{
            cout<<"triangle is isosceles"<< endl;
        }
    }
    else{
        cout<<"triangle is not possible"<< endl;
    }
    return 0;
}
