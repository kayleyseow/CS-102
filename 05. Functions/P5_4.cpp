// Kayley Seow
// 10/20/2020
// Lab 5
// P5.4, This program is a collection of functions which return true if the arguments are all the same, return true if the arguments are all different and return true if the arguments are sorted, with the smallest one coming first.

#include <iostream>
using namespace std;

bool all_the_same(double x, double y, double z);
bool all_different(double x, double y, double z);
bool sorted(double x, double y, double z);

int main() {
	double firstnum, secondnum, thirdnum;
	cout << "Please enter values for x, y, and z\n";
	cin >> firstnum >> secondnum >> thirdnum;
	cout << "bool all_the_same(x, y, z) returns " << all_the_same(firstnum, secondnum, thirdnum) << ".\n";
	cout << "bool all_different(x, y, z) returns " << all_different(firstnum, secondnum, thirdnum) << ".\n";
	cout << "bool sorted(x, y, z) returns " << sorted(firstnum, secondnum, thirdnum) << ".\n";
}

// a. This functions returns true if the arguments are all the same.
bool all_the_same(double x, double y, double z) {
	if (x == y && y == z && z == x)
	{
		return true;
	}
	return false;
}

// b. This functions returns true if the arguments are all different.
bool all_different(double x, double y, double z) {
	if (x != y && y != z && z != x)
	{
		return true;
	}
	return false;
}

// c. This functions returns true if the arguments are sorted, with the smallest one coming first.
bool sorted(double x, double y, double z) {
	if (x < y && y < z && x < z)
	{
		return true;
	}
	return false;
}
