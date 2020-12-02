// Kayley Seow
// 11/30/2020
// Lab 6
// P6.1, This program initializes an array with ten random integers and then prints four lines of output, containing every element at an even index, every even element, all elements in reverse order, and only the first and last element.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void printEven(int values[10]);
void printEvenElement(int values[10]);
void printReverseElement(int values[10]);
void printFirstLast(int values[10]);

void printEven(int values[10]) //Print every element at an even index.
{
	cout << "Every element at an even index of the array: ";
	for (int i = 0; i < 10; i += 2)
	{
		cout << values[i] << " ";
	}
	cout << "\n";
}

void printEvenElement(int values[10]) //Print every even element.
{
	cout << "Every even element of the array: ";
	for (int i = 0; i < 10; i ++)
	{
		if (values[i] % 2 == 0)
		{
			cout << values[i] << " ";
		}
	}
	cout << "\n";
}

void printReverseElement(int values[10])
{
	cout << "All elements of the array in reverse order: ";
	for (int i = 9; i >= 0; i--)
	{
		cout << values[i] << " ";
	}
	cout << "\n";
}

void printFirstLast(int values[10])
{
	cout << "First Element: " << values[0] << "\n";
	cout << "Last Element: " << values[9] << "\n";
}

int main() {
	int numbers[10];
	cout << "All the numbers in the array: ";
	for (int i = 0; i < 10; i++)//Fill the array with 10 random numbers from 0 to 100
	{
		numbers[i] = rand() % 100 + 1;
		cout << numbers[i] << " ";
	}
	cout << "\n";
	printEven(numbers);
	printEvenElement(numbers);
	printReverseElement(numbers);
	printFirstLast(numbers);
}
