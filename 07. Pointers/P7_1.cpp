// Kayley Seow
// 12/23/2020
// Lab 7
// P7.1, This program has a function that replaces that receives two pointers and sorts the values to which they point.

#include <iostream>
#include <string>
using namespace std;

void sort2(double* p, double* q);

void sort2(double* p, double* q)
{
	if (*p > *q)
	{
		double temporary = *p;
		*p = *q;
		*q = temporary;
	}
}

int main() {
	double firstdouble, seconddouble;
	cout << "Please enter two doubles: \n";
	cin >> firstdouble >> seconddouble;
	cout << "Before sort2 is called:\nfirsdouble = " << firstdouble << endl;
	cout << "&firsdouble = " << &firstdouble << endl;
	cout << "seconddouble = " << seconddouble << endl;
	cout << "&seconddouble = " << &seconddouble << endl;
	sort2(&firstdouble, &seconddouble);
	cout << "After sort2 is called:\nfirsdouble = " << firstdouble << endl;
	cout << "&firsdouble = " << &firstdouble << endl;
	cout << "seconddouble = " << seconddouble << endl;
	cout << "&seconddouble = " << &seconddouble << endl;
}
