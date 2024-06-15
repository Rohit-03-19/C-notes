// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), depending upon which the total salary is calculated as:

//     Total_salary = Basic + hra + da + allow – pf
// where :
// hra   = 20% of basic
// da    = 50% of basic
// allow = 1700 if grade = ‘A’
// allow = 1500 if grade = ‘B’
// allow = 1300 if grade = ‘C' or any other character
// pf    = 11% of basic.
// Round off the total salary and then print the integral part only.


#include<iostream>
using namespace std;

int main(){
    int basic,hra, da, allow, pf, Total_salary ;
    int grade;
    cout<< "Enter the basic salary"<<endl;
    cin>> basic;
    cout<< "Enter the grade pay in one character:-"<<endl<<
    "for A enter 1:"<<endl<<
    "for B enter 2:"<<endl<<
    "for C or any other character press anything:" << endl ;
    cin>> grade;
    hra = basic + (20/100)*basic;
    da = basic + (20/100)*basic;
    if(grade == 1){
        allow = 1700;
    }
    else if(grade == 2){
        allow == 1500;
    }
    else{
        allow  = 1300;
    }
    pf = basic + (11/100)*basic;
    Total_salary= hra + da + basic + allow - pf;
    cout<<"Total salary is " << Total_salary <<endl;
    return 0;

}