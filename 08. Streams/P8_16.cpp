// Kayley Seow
// 1/23/2020
// Lab 8
// P8.16, This program concatenates the contents of several files into one file. The target file is always the last file specified on the command line.

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

typedef istreambuf_iterator<char> buf_iter;

void errfile(char* fname)
{
    cout << "Error opening file: " << fname << "\n";
    exit(1);
}

int main(int argc, char** argv)
{
    ofstream outfile(argv[argc - 1]);
    if (!outfile)
    {
        errfile(argv[argc - 1]);
    }
    for (int i = 1; i < argc - 1; ++i)
    {
        ifstream infile(argv[i]);
        if (!infile)
        {
            errfile(argv[argc - 1]);
        }
        for (buf_iter bufit(infile), e; bufit != e; ++bufit)
        {
            outfile << *bufit;
            if (!outfile)
            {
                exit(1);
            }
        }
    }
    return 0;
}
