// Kayley Seow
// 9/20/2020
// Lab 3
// P3.16, This program computes the pay and prints a check for the employee.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name; 
    double salary, hours, paycheck;
    double overtime = 0;
    cout << "Enter your name, salary, and hours worked.\n";
    cin >> name >> salary >> hours;
    if (hours > 40) 
    {
        overtime = (salary * 1.5 * (hours - 40));
        hours = 40;
    }
    paycheck = (salary * hours) + overtime;
    cout << name << "'s paycheck: \n" << name << " earned " << paycheck << endl;
}

