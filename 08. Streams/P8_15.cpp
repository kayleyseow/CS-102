// Kayley Seow
// 1/23/2020
// Lab 8
// P8.15, This program copies one file to another. The file names are specified on the command line.

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    ifstream infile(argv[1]);
    ofstream outfile(argv[2]);
    vector<string> lines;
    if (!infile || !outfile)
    {
        cout << " There is an error with opening the files.\n";
        exit(1);
    }
    char c;
    while (infile.get(c))
    {
        outfile.put(c);
        if (!outfile)
        {
            exit(1);
        }
    }
    return 0;
}
