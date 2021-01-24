// Kayley Seow
// 1/23/2020
// Lab 8
// P8.4, This program reads a file containing two columns of floating-point numbers, prompts the user for the file name, and prints the average of each column.

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    cout << "Please enter your file name: \n"; //Prompts the user for the file name
    string filename; //Declare string variable for the cin
    cin >> filename; //Get the file name from user
    ifstream in_file; //Create a ifstream
    in_file.open(filename.c_str()); //Convert to Cstring so you can open
    if (in_file.fail()) // Check for failure after opening
    {
        return 0;
    }
    double firstcolumntotal = 0, secondcolumntotal = 0, iterations1 = 0, iterations2 = 0;
    float input1, input2;
    while (in_file >> input1 >> input2)
    {
        iterations1++;
        iterations2++;
        firstcolumntotal += input1;
        secondcolumntotal += input2;
    }
    firstcolumntotal /= iterations1;
    secondcolumntotal /= iterations2;
    cout << "In " << filename << ", the average of the first column is equal to " << firstcolumntotal << ", and the average of the second column is equal to " << secondcolumntotal << ".\n";
    in_file.close();
    return 0;
}
