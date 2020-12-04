// Kayley Seow
// 12/4/2020
// Lab 6
// P6.9, This program has a function that checks whether two arrays have the same elements in the same order.

#include <iostream>
#include <string>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size);
void printarray(int a[], int a_size, int b[], int b_size);

bool equals(int a[], int a_size, int b[], int b_size)
{
	if (a_size != b_size)
	{
		return false;
	}
	for (int i = 0; i < a_size; i++)
	{
		if (a[i] != b[i])
		{
			return false;
			break;
		}
	}
	return true;
}

void printarray(int a[], int a_size, int b[], int b_size)
{
	cout << "0 if arrays are not equal, 1 if arrays are equal: " << equals(a, a_size, b, b_size) << "\n";
	cout << "The 1st array: ";
	for (int i = 0; i < a_size; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	cout << "The 2nd array: ";
	for (int i = 0; i < b_size; i++)
	{
		cout << b[i] << " ";
	}
	cout << "\n\n";
}

int main() {
	int array1[9] = { 1, 4, 9, 16, 9, 7, 4, 9, 11 };
	int array2[9] = { 1, 4, 9, 16, 9, 7, 4, 9, 11 };
	int array3[4] = { 1, 4, 9, 16 };
	int array4[9] = { 1, 2, 3, 4, 5, 6, 7, 8, -1 };
	printarray(array1, 9, array2, 9);// 1, same arrays
	printarray(array1, 9, array3, 4);// 0, test for different length arrays
	printarray(array1, 9, array4, 9);// 0, test for same length arrays with different elements
}
