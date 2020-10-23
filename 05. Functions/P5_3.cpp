// Kayley Seow
// 10/21/2020
// Lab 5
// P5.3, This program is a collection of functions which return the smallest of the arguments and return average of the arguments.

#include <iostream>
using namespace std;

double smallest(double x, double y, double z);
double average(double x, double y, double z);

int main() {
	double firstnum, secondnum, thirdnum;
	cout << "Please enter values for x, y, and z\n";
	cin >> firstnum >> secondnum >> thirdnum;
	cout << "double smallest(double x, double y, double z) returns " << smallest(firstnum, secondnum, thirdnum) << ".\n";
	cout << "double average(double x, double y, double z) returns " << average(firstnum, secondnum, thirdnum) << ".\n";
}

// a. This functions returns the smallest of the arguments.
double smallest(double x, double y, double z) {
	if (x <= y && x <= z)
	{
		return x;
	}
	else if (y <= x && y <= z)
	{
		return y;
	}
	else
	{
		return z;
	}
}

// b. This functions returns true if the arguments are all different.
double average(double x, double y, double z) {
	return (x + y + z) / 3;
}
