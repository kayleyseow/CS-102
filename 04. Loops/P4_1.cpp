// Kayley Seow
// 10/3/2020
// Lab 4
// P4.1, This program is a collection of programs that calculates the sum of all even numbers between 2 and 100, the sum of all squares between 1 and 100, all powers of 2 from 20 up to 220, the sum of all odd numbers between a and b(inclusive), where a and b are inputs, and the sum of all odd digits of an input.

#include <iostream>
using namespace std;

int main() {
	// a. The sum of all even numbers between 2 and 100 (inclusive).
	int asum = 0;
	for (int i = 2; i <= 100; i += 2)
	{
		asum += i;
	}
	cout << "The sum of all even numbers between 2 and 100, inclusive, is " << asum << ".\n";

	// b. The sum of all squares between 1 and 100 (inclusive).
	int bsum = 0;
	for (int i = 1; i <= 10; i++)
	{
		bsum += (i * i);
	}
	cout << "The sum of all squares between 1 and 100, inclusive, is " << bsum << ".\n";

	// c. All powers of 2 from 20 up to 220.
	for (int i = 20; i <= 220; i++)
	{
		cout << "2 to the power of " << i << " is " << pow(2, i) << ".\n";
	}

	// d. The sum of all odd numbers between a and b(inclusive), where a and b are inputs.
	int a, b;
	cout << "Please enter a value for a and a value for b.\n";
	cin >> a >> b;
	int dsum = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % 2 != 0)
		{
			dsum += i;
		}
	}
	cout << "The sum of all odd numbers between " << a << " and " << b << " is " << dsum << ".\n";

	// e. The sum of all odd digits of an input. (For example, if the input is 32677, the sum would be 3 + 7 + 7 = 17.)
	int esum = 0;
	int input, orginput; 
	cout << "Please enter an input so the program can calculate all of its odd numbers.\n";
	cin >> orginput;
	input = orginput;
	while (input > 0)
	{
		if ((input % 10) % 2 != 0)
		{
			esum += (input % 10);
		}
		input /= 10;
	}
	cout << "The sum of all of the odd digits in " << orginput << " is " << esum << ".\n";
	return 0;
}
