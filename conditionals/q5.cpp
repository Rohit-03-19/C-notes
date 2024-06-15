// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

// Hint : Use type casting


#include<iostream>
using namespace std;

int main(){
    int S , W , E;
    int C;
    cout<<"enter the starting value between (0,100)" <<endl;
    cin>> S;
    cout<< " Enter the ending value (S,1000)"<< endl;
    cin>> E;
    cout<< "enter the step size (0,80)" <<endl;
    cin>> W;
    while( S <= E ){
        C= (S-32)*5;
        cout<< S <<"  " << C/9 <<endl;
        S=S+W; 
    }
    return 0;

}