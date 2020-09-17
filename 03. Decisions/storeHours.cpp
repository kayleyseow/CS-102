#include <iostream>
#include <string>
using namespace std;

int main() {
  char dayName;
  cin >> dayName;
  if (dayName == 'S') //Sunday
  {
    cout << "Store Hours: 10:00 a.m.–5:00 p.m.\n";
  }
  else if (dayName == 'A') // Saturday
  {
    cout << "Store Hours: 12:00 p.m.–5:00 p.m.\n";
  }
  else // Monday-Friday
  {
    cout << "Store Hours: 8:00 a.m.–10:00 p.m.\n";
  }
}
