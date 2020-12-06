// Kayley Seow
// 12/6/2020
// Lab 6
// P6.14, This program has a function that generates a sequence of 20 random die tosses and that prints the die values, marking only the longest run.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void longestrun(int array[20])
{
	int i = 0, k, runcounter, j = 1, position1, position2, maximum = 0;
	while (i < 20)
	{
		int k = array[i];
		j = i;
		 runcounter= 0;
		while (array[j] == k)
		{
			runcounter++;
			j++;
		}
		if (runcounter > maximum)
		{
			maximum = runcounter;
			position1 = i;
			position2 = j - 1;
			runcounter = 0;
		}
		i = j;
	}
	for (i = 0; i < 20; i++)
	{
		if (i == position1 && position1 < 20 && position2 < 20)
		{
			cout << "(" << " ";
		}
		cout << array[i] << " ";
		if (i == position2 && position1 < 20 && position2 < 20)
		{
			cout << ")" << " ";
		}
	}
}

int main()
{
	srand(time(0));
	int array[20];
	cout << "The original array: ";
	for (int i = 0; i < 20; i++) // fill array with 20 random integers from 1 to 6
	{
		array[i] = rand() % 6 + 1;
		cout << array[i] << " "; // print out array debug
	}
	cout << "\n";
	cout << "The array with longest run marked: ";
	longestrun(array);
	cout << "\n";
}
