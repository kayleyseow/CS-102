// Kayley Seow
// 9/21/2020
// Lab 3
// P3.5, This programm reads an integer and prints how many digits the number has, by checking whether the number is >= 10, >= 100, and so on.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Enter a number >= -1,000,000,000 and <= 1,000,000,000\n";
    cin >> number;
    if (number < 0)
    {
        number *= -1;
    }
    if (number < 10) cout << "This number has 1 digit.\n";
    else if (number < 100) cout << "This number has 2 digits.\n";
    else if (number < 1000) cout << "This number has 3 digits.\n";
    else if (number < 10000) cout << "This number has 4 digits.\n";
    else if (number < 100000) cout << "This number has 5 digits.\n";
    else if (number < 1000000) cout << "This number has 6 digits.\n";
    else if (number < 10000000) cout << "This number has 7 digits.\n";
    else if (number < 100000000) cout << "This number has 8 digits.\n";
    else if (number < 1000000000) cout << "This number has 9 digits.\n";
    else cout << "This number has 10 digits.\n";
}
