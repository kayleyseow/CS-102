// Practice with if else statement structures 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string status;
	int income;
	cout << "Enter your status (\"S\" for single, \"M\" for married) and your income to the nearest dollar.\n";
	cin >> status >> income;
	int tax = 0;
	if (status == "S")
	{
		if (income > 32000)
		{
			tax = 3200 + 0.25 * ((double)income - 32000);
		}
		else
		{
			tax = income * 0.1;
		}
	}
	else // status == "M"
	{
		if (income > 64000)
		{
			tax = 6400 + 0.25 * ((double)income - 64000);
		}
		else
		{
			tax = income * 0.1;
		}
	}
	cout << "The amount of tax you need to pay is $" << tax << " and the amount you have left is $" << income - tax << ".\n";
}
