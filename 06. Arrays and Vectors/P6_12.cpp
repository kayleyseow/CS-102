// Kayley Seow
// 11/30/2020
// Lab 6
// P6.12, This program has a function that removes duplicates from an array.

#include <iostream>
#include <string>
using namespace std;

void remove_element(int values[], int& current_size, int position);
void remove_duplicates(int array[], int& size);

void remove_element(int values[], int& current_size, int position)
{
	for (int i = position + 1; i < current_size; i++)
	{
		values[i - 1] = values[i];
	}
	current_size--;
}

void remove_duplicates(int array[], int& size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				remove_element(array, size, j);
				i--;
				break;
			}
		}
	}
}

int main() {
	int numbers[9] = { 1, 4, 9, 16, 9, 7, 4, 9, 11};
	int size = 9;
	cout << "The original array: ";
	for (int i = 0; i < size-1; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << numbers[size-1] <<"\n";
	remove_duplicates(numbers, size);
	cout << "The array with duplicates deleted: ";
	for (int i = 0; i <size-1; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << numbers[size-1] << "\n";
}
