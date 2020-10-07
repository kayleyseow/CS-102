// Kayley Seow
// 10/3/2020
// Lab 4
// P4.18, This program calculates the Fibonacci sequence using the fold1 and fold2 method.

#include <iostream>
using namespace std;

int main()
{
	int fold1 = 1, fold2 = 1, input, fnew;
	cout << "Please enter the number of times that you want Fibonacci to iterate.\n";
	cin >> input;
	cout << fold1 << ", " << fold2;
	for (int i = 0; i < input; i++)
	{
		fnew = fold1 + fold2;
		cout << ", " << fnew;
		fold2 = fold1;
		fold1 = fnew; 
	}
	return 0;
}
