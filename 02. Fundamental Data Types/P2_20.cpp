// Kayley Seow
// 9/7/2020
// Lab 2
// P2.20, This program  reads an integer and breaks it into a sequence of individual digits using spaces.

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string number;
    cout << "Enter a number:\n";
    cin >> number;
    int numlength = number.length();
    for (int i = 1; i < numlength * 2 - 1; i+=2) 
    {
        string before = number.substr(0, i);
        string after = number.substr(i);
        number = before + " " + after;
    }
    cout << number + "\n";
}

