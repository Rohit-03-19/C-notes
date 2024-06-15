#include <iostream>
using namespace std;

int main() {
    int a, i;
    cout << "Enter the number for which you want the multiples: " << endl;
    cin >> a;
    i = 1;
    while (i <= 10) {
        cout << i << " * " << a << " = " << i * a << endl;
        i++;
    }
    return 0;
}
