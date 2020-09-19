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
