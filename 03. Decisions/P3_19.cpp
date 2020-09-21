// Kayley Seow
// 9/20/2020
// Lab 3
// P3.19, This program computes the income tax according to a tax schedule.

#include <iostream>
#include <string>
using namespace std;

int main() {
    double income, taxamt = 0;
    cout << "Enter your income.\n";
    cin >> income;
    taxamt = income * 0.01;
    if (income > 50000)
    {
        taxamt += (income - 50000) * 0.01;
    }
    if (income > 750000)
    {
        taxamt += (income - 75000) * 0.01;
    } 
    if (income > 100000)
    {
        taxamt += (income - 100000) * 0.01;
    } 
    if (income > 250000)
    {
        taxamt += (income - 250000) * 0.01;
    } 
    if (income > 500000)
    {
        taxamt += (income - 500000) * 0.01;
    }
    cout << "Amount of tax: " << taxamt << endl;
}
