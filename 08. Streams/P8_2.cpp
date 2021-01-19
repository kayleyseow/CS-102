// Kayley Seow
// 1/18/2020
// Lab 8
// P8.2, This program reads a file containing floating-point numbers, prints the average of the numbers in the file, and prompts the user for the file name.

#include <iostream>
#include <string>
#include <fstream>
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
    string in_filenumberstring;
    double in_filenumber, total = 0, iterations = 0;
    while (in_file >> in_filenumberstring)
    {
        in_filenumber = stod(in_filenumberstring);
        iterations++;
        total += in_filenumber;
    }
    double average;
    average = total / iterations;
    cout << "The average of the numbers in " << filename << " is equal to " << average << "\n";
    in_file.close();
    return 0;
}
