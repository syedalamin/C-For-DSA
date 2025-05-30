#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
  int jersey_no;
  string country;
};

int main()
{
  Cricketer *dhoni = new Cricketer; // dynamic

  dhoni->jersey_no = 10;
  dhoni->country = "India";

  Cricketer *kohli = new Cricketer;

  kohli->jersey_no = dhoni->jersey_no;
  kohli->country = dhoni->country;
  delete dhoni;

  cout << "Dhoni" << " " << dhoni->jersey_no << " " << dhoni->country << endl;
  cout << "koholi" << " " << kohli->jersey_no << " " << kohli->country << endl;

  return 0;
}
