// Kayley Seow
// 12/23/2020
// Lab 7
// P7.2, This program has a function that replaces the value to which p points with x if x is greater. Return the old value to which p pointed.

#include <iostream>
#include <string>
using namespace std;

double replace_if_greater(double* p, double x);

double replace_if_greater(double* p, double x)
{
	double original_p = *p;
	cout << original_p;
	if (x > original_p)
	{
		*p = x;
	}
	return original_p;
}

int main() {
	double firstdouble, seconddouble;
	cout << "Please enter you two doubles: \n";
	cin >> firstdouble >> seconddouble;
	//double* p = &firstdouble;
	replace_if_greater(&firstdouble, seconddouble);
}
