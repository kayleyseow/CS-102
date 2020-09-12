// Kayley Seow
// 9/7/2020
// Lab 2
// P2.18, This program reads a number between 1,000 and 999,999 from the user and prints it without a comma separating the thousands.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;
    cout << "Enter a number between 1,000 and 999,999\n";
    cin >> number;
    int numlength = number.length();
    string before = number.substr(0, numlength - 4);
    string after = number.substr(numlength - 3, 3);
    cout << before + after + "\n";
}

