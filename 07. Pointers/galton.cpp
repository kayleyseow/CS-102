#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	
	int* counts[10];
	
	// Allocate the rows
	for (int i = 0; i < 10; i++)
	{
		counts[i] = new int[i + 1];
		for (int j = 0; j <= i; j++)
		{
			counts[i][j] = 0;
		}
	}

	const int RUNS = 1000;

	//  Simulate 1,000 balls
	for (int run = 0; run < RUNS; run++)
	{
		// Add a ball to the top
		counts[0][0]++;
		// Have the ball run to the bottom
		int j = 0;
		for (int i = 1; i < 10; i++)
		{
			int r = rand() % 2;
			// If r is even, move down, otherwise to the right
			if (r == 1)
			{
				j++;
			}
			counts[i][j]++;
		}
	}

	// Print all counts
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << setw(4) << counts[i][j];
		}
		cout << endl;
	}

	// Deallocate the rows
	for (int i = 0; i < 10; i++)
	{
		delete[] counts[i];
	}
	
	return 0;
}
