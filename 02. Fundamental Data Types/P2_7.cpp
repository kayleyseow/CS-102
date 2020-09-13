// Kayley Seow
// 9/6/2020
// Lab 2
// P2.7, This program prompts the user for the radius and then prints the area, circumference, volume, and surface area.

#include <iostream>
using namespace std;

int main()
{
	int radius = 0;
	cout << "Enter the radius" << endl;
	cin >> radius;
	cout << "The area: " << 3.14*pow(radius,2) << endl;
	cout << "The circumference: " << radius*3.14*2 << endl;
	cout << "The volume: " << (4/3)*3.14*pow(radius,3) << endl;
	cout << "The surface area: " << 4*3.14*pow(radius,2) << endl;
	return 0;
}
