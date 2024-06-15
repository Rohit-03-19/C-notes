//  Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.



// 1, if the character is an uppercase alphabet (A - Z).
// 0, if the character is a lowercase alphabet (a - z).
// -1, if the character is not an alphabet.



#include<iostream>
using namespace std;
K
int main()
{
    char testchar;
    int asc;

    cout<< "enter a charactcer";
    cin>> testchar;
    if(testchar>= "A" && testchar <= "Z" )
    {
        cout<<"1";
    }
    else if (testchar>="a" && testchar <= "z")
    {
        cout<<"o";
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}