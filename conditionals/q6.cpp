// Teacher is remarking students on the basis of their score. Criteria for remarking students are as follows:

// If the score is greater than 75 up to 100 then it will be remarked ‘Distinction’.

// If the score is greater than 50 up to 75 then it will remarked ‘Average’

// If the score is between 35 to 50 then it will be remarked ‘Below Average’.


#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enther the marks of the students"<<endl;
    cin>> marks;
    if( marks >75 && marks <= 100 ){
        cout<<"Distiction"<<endl;
    }
    else if( marks >50 && marks <= 75 ){
        cout<<"Average"<<endl;
    }
    else if(marks > 35 && marks <= 50 ){
        cout<<"Below average"<<endl;
    }
    else {
        cout<<"The student not qualified"<<endl;
    }
    return 0;
}