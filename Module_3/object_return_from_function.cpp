#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int roll;
  int cls;
  double gpa;

  Student(int roll, int cls, double gpa)
  {
    (*this).roll = roll;
    this->cls = cls;
    this->gpa = gpa;
  }
};

Student fun()
{
  Student tutul(4, 12, 3.89);
  return tutul;
}

int main()
{

  int r;
  int c;
  double g;

  cin >> r >> c >> g;

  Student alamin(r, c, g);
  Student obj = fun();

  cout << alamin.roll << " " << alamin.cls << " " << alamin.gpa << endl;
  cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
  return 0;
}
