#include <iostream>
using namespace std;

int main()
{
	int floor;
	cout << "Your current floor: \n";
	cin >> floor;
	int actualfloor;
	if (floor > 13)
	{
		actualfloor = floor - 1;
	}
	else
	{
		actualfloor = floor;
	}
	cout << "Your actual floor is floor " << actualfloor << endl;
}
