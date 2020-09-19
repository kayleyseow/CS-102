/*
The user entered T (for tall) or S (for short), and it was stored in the character variable userSize.  Then a height (integer) was asked for and stored in the variable userHeight.
You should write an if that verifies the height and prints OK if the combination is valid or an error message if it is not.  To be valid, if the user entered T, the height should 
be more than 72.  If the user entered S, the height should be less than or equal to 72.  Do this with one if using and, and else.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  char userSize;
  cin >> userSize;
  int height;
  cin >> height;
  if ((userSize =='T'&& height >72) || (userSize == 'S' && height <=72))
  {
    cout << "OK\n";
  }
  else
  {
    cout << "Error: your combination is invalid.\n";
  }
}
