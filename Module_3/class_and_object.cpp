#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  char name[100];
  int role;
  double gpa;
};

int main()
{

  Student a, b;
  cin.getline(a.name, 100);
  cin >> a.role >> a.gpa;
  cin.ignore();
  cin.getline(b.name, 100);
  cin >> b.role >> b.gpa;

  cout << a.name << a.role << " " << a.gpa << " " << endl;
  cout << b.name << b.role << " " << b.gpa << " " << endl;

  return 0;
}
