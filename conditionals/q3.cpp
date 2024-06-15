// Note: Solve this question after watching the video "More on While Loop".
// Write a program that performs the tasks of a simple calculator. The program should first take an integer as input and then based on that integer perform the task as given below. You should also take an integer n that would actually tell us how many times will the operations be performed.

// 1. If the input is 1, then 2 integers are taken from the user and their sum is printed.
// 2. If the input is 2, then 2 integers are taken from the user and their difference(1st number - 2nd number) is printed.
// 3. If the input is 3, then 2 integers are taken from the user and their product is printed.
// 4. If the input is 4, then 2 integers are taken from the user and the quotient obtained (on dividing 1st number by 2nd number) is printed.
// 5. If the input is 5, then 2 integers are taken from the user and their remainder(1st number mod 2nd number) is printed.
// 6. If the input is 6, then the program exits.
// 7. For any other input, then print "Invalid Operation".
// Note: Each answer in next line.


#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the operation number (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for modulus, 6 to end the program):" << endl;
    cin >> a;

    if (a >= 1 && a <= 5) {
        cout << "Enter two numbers:" << endl;
        cin >> b >> c;
    }

    switch (a) {
        case 1:
            cout << "Result: " << b + c << endl;
            break;
        case 2:
            cout << "Result: " << b - c << endl;
            break;
        case 3:
            cout << "Result: " << b * c << endl;
            break;
        case 4:
            if (c == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "Result: " << b / c << endl;
            }
            break;
        case 5:
            if (c == 0) {
                cout << "Error: Modulus by zero is not allowed." << endl;
            } else {
                cout << "Result: " << b % c << endl;
            }
            break;
        case 6:
            cout << "Program ended." << endl;
            break;
        default:
            cout << "Invalid Operation" << endl;
            break;
    }
    return 0;
}
