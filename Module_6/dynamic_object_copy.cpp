#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
  int jersey_no;
  string country;
  Cricketer(string country, int jersey_no)
  {
    this->country = country;
    this->jersey_no = jersey_no;
  }
};

int main()
{
  Cricketer *tutul = new Cricketer("Bangladesh", 100);
  Cricketer *alamin = new Cricketer("Bangladesh", 15);

  *alamin =* tutul ;

  // cout << tutul->jersey_no << endl;
  // cout << alamin->jersey_no << endl;
  delete tutul;

  cout << alamin->jersey_no << endl;
  return 0;
}
