#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int roll;
  int cls;
  double gpa;

  Student(int r, int c, double g)
  {
    roll = r;
    cls = c;
    gpa = g;
  }
};

int main()
{

  int r;
  int c;
  double g;

  cin >> r >> c >> g;

  Student alamin(r, c, g);

  // Student tutul(4, 12, 3.89);

  cout << alamin.roll << " " << alamin.cls << " " << alamin.gpa << endl;
  // cout << tutul.roll << " " << tutul.cls << " " << tutul.gpa << endl;
  return 0;
}
