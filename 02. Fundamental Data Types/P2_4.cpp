// Kayley Seow
// 9/6/2020
// Lab 2
// P2.4, This program prompts the user for two integers and then prints the sum, difference, product, and average.

#include <iostream>
using namespace std;

int main()
{
	int i1 =0, i2 = 0;
	cout << "Enter the first integer" << endl;
	cin >> i1;
	cout << "Enter the second integer" << endl;
	cin >> i2;
	cout << "The sum of the two integers: " << i1 + i2 << endl;
	cout << "The difference of the two integers: " << i1 - i2 << endl;
	cout << "The product of the two integers: " << i1 * i2 << endl;
	cout << "The average of the two integers: " << (i1 + i2)/2 << endl;
	return 0;
}

