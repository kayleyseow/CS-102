//Practice with the conditional operator
#include <iostream>
using namespace std;

int main()
{
	int floor;
	cout << "Your current floor: \n";
	cin >> floor;
	int actualfloor;
	actualfloor = floor > 13 ? floor - 1 : floor;
	/*if (floor > 13)
	{
		actualfloor = floor - 1;
	}
	else
	{
		actualfloor = floor;
	}
	*/
	cout << "Your actual floor is floor " << actualfloor << endl;
	//cout << "Your actual floor is floor " << (floor > 13 ? floor - 1 : floor) << endl;
}
