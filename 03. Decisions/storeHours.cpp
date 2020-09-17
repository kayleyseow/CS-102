/*
A store’s hours are Mon.–Fri. 8:00 a.m.–10:00 p.m., Saturday 10:00 a.m.–5:00 p.m., and Sunday 12:00 p.m.–5:00 p.m.  The user will type in a day, which will be stored in the 
character variable dayName.  (You can assume it is a valid day.)  The values are S-Sunday, M-Monday, T-Tuesday, W-Wednesday, R-Thursday, F-Friday, A-Saturday.  Write an if 
statement that will print a message giving the store’s hours.
*/

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
