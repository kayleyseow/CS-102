// Kayley Seow
// 9/21/2020
// Lab 3
// P3.7, This program reads three numbers and prints “increasing” if they are in increasing order, “decreasing” if they are in decreasing order, and “neither” otherwise.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int firstnum, secondnum, thirdnum;
    cout << "Enter your three numbers.\n";
    cin >> firstnum >> secondnum >> thirdnum;
    if (firstnum < secondnum && secondnum < thirdnum)
    {
        cout << "increasing\n";
    }
    else if (firstnum > secondnum && secondnum > thirdnum)
    {
        cout << "decreasing\n";
    }
    else
    {
        cout << "neither\n";
    }
}
