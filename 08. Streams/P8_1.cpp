// Kayley Seow
// 1/16/2020
// Lab 8
// P8.1, This program opens a file with the name hello.txt., stores the message “Hello, World!” in the file, closes the file, opens the same file again, reads the message into a string variable and prints it.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream out_file;
    out_file.open("hello.txt");
    out_file << "Hello, World!";
    out_file.close();
    ifstream in_file;
    in_file.open("hello.txt");
    if (in_file.fail()) // Check for failure after opening
    {
        return 0;
    }
    string message;
    getline(in_file, message);
    cout << message << "\n";
    in_file.close();
    return 0;
}
