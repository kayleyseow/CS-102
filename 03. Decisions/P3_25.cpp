#include <iostream>
#include <string>
using namespace std;

int main() {
    int year;
    cout << "Enter your year.\n";
    cin >> year;
    if (year <= 1582 && year%4 == 0)
    {
        cout << "This year is a leap year.\n";
    }
    else if (year%4 == 0)
    {
        if (year % 100 == 0 && year % 400 != 0)
        {
            cout << "This year is not a leap year.\n";
        }
        cout << "This year is a leap year.\n";
    }
    else
    {
        cout << "This year is not a leap year.\n";
    }
}
