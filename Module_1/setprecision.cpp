#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double d = 23.45698;

  cout << fixed << setprecision(5) << d << endl;

  return 0;
}