/*
Valid part names are S (for SAW), H (for HAMMER), W (for WRENCH), and P (for PLIERS).  The user is asked to type in the letter for a part name, and the letter will be stored in 
the character variable toolType.  You should check if the name is one of the four listed above.  Write an if statement that prints an error message if it is not valid.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  char toolType;
  cin >> toolType;
  if (!(toolType=='S' || toolType=='H' || toolType=='W' || toolType=='P'))
  {
    cout << "Error: your part name is invalid.\n";
  }
}
