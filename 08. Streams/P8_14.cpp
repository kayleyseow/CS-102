// Kayley Seow
// 1/17/2020
// Lab 8
// P8.14, This program asks the user for a file name and displays the number of characters, words, and lines in that file. Then the program asks for the name of the next file. When the user enters a file that doesn’t exist (such as the empty string), the program should exits.

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    string file_name;
    cout << "Type the file name: ";
    cin >> file_name;
    ifstream in_file;
    in_file.open(file_name.c_str());
    if (in_file.fail())
    {
        return 0;
    }
    int characters = 0, words = 0, lines = 0;
    string in_line;
    while (getline(in_file, in_line))
    {
        lines++;
        string in_word;
        istringstream iss(in_line);
        while (iss >> in_word)
        {
            words++;
            characters += in_word.size();
        }
    }
    cout << "There are " << characters << " characters, " << words << "words, and " << lines << " lines in this file.\n";
    return 0;
}
