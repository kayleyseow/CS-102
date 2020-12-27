// Kayley Seow
// 12/23/2020
// Lab 7
// P7.4, This program has a function that returns a pointer to the maximum value of an array of floating-point data; if size is 0, NULL is returned.

#include <iostream>
#include <string>
using namespace std;

double* maximum(double* a, int size);

double* maximum(double* a, int size)
{
	if (size <= 0)
	{
		return NULL;
	}
	int maximum_position = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(a + i) > * (a + maximum_position))
		{
			maximum_position = i;
		}
	}
	return a + maximum_position;
}
