// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.



// Note:
// You don't have to write the main function or take input. It has already been taken care of and you need to just print the integer value . Just write the code that prints Fahrenheit to Celsius table in the function itself.
// Formula is C = (F - 32) * 5/9
// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// 3 integers - S, E and W respectively
// Output Format :
// Fahrenheit to Celsius conversion table. One line for every Fahrenheit and Celsius Fahrenheit value. Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")
// Constraints :
// 0 <= S <= 1000
// 0 <= E <= 1000
// 0 <= W <= 1000


#include <iostream>
using namespace std;

void temp(int a , int b , int d ){
    int c=0;
    while (a<=b){
        c= ((a-32) *5)/9;
        cout<<a<<" "<<c<<endl;
        a=a+d;
    }
}
int main(){
    int S,E,W;
    cin>>S>>E>>W;
    temp(S,E,W);
    return 0;
}