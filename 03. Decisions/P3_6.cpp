// Kayley Seow
// 9/21/2020
// Lab 3
// P3.6, This program reads three numbers and prints “all the same” if they are all the same, “all different” if they are all different, and “neither” otherwise.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int firstnum, secondnum, thirdnum;
    cout << "Enter your three numbers.\n";
    cin >> firstnum >> secondnum >>thirdnum;
    if (firstnum == secondnum && secondnum == thirdnum)
    {
        cout << "all the same\n";
    }
    else if (firstnum != secondnum && secondnum != thirdnum && thirdnum != firstnum)
    {
        cout << "all different\n";
    }
    else
    {
        cout << "neither\n";
    }
}
