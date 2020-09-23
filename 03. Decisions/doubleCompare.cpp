//Practice comparing doubles using EPSILON
#include <iostream>
#include <string>
using namespace std;

int main() {
  const double EPSILON = 1E-14;
  double r = sqrt(2.0);
  if (abs(r*r-2)< EPSILON)
  {
    cout << "sqrt(2) squared is approximately 2.\n";
  }
}
