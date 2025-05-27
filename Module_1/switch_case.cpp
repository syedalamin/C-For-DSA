#include <iostream>
using namespace std;

int main()
{
  int day;
  cin >> day;

  switch (day)
  {
  case 1:
    cout << "Saturday";
    break;
  case 2:
    cout << "Sunday";
    break;
  case 3:
    cout << "Monday";
    break;
  case 4:
    cout << "TuesDay";
    break;
  case 5:
    cout << "WednesDay";
    break;
  case 6:
    cout << "ThursDay";
    break;
  case 7:
    cout << "Friday";
    break;

  default:
    cout << "Wrong input";
    break;
  }

  return 0;
}