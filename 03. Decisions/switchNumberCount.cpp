//Practice with switch statements
#include <iostream>
using namespace std;

int main()
{
	int digit;
	cout << "Enter a digit between 1 and 10: \n";
	cin >> digit;
	switch (digit)
	{
	case 1:
	{
		cout << "one\n";
		break;
	}
	case 2:
	{
		cout << "two\n";
		break;
	}
	case 3:
	{
		cout << "three\n";
		break;
	}
	case 4:
	{
		cout << "four\n";
		break;
	}
	case 5:
	{
		cout << "five\n";
		break;
	}
	case 6:
	{
		cout << "six\n";
		break;
	}
	case 7:
	{
		cout << "seven\n";
		break;
	}
	case 8:
	{
		cout << "eight\n";
		break;
	}
	case 9:
	{
		cout << "nine\n";
		break;
	}
	case 10:
	{
		cout << "ten\n";
		break;
	}
	default: cout << "invalid number\n";
	}
}
