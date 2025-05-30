#include <bits/stdc++.h>
using namespace std;

// Student
// {
// 	name;
// 	roll;
// 	section;
// 	math_marks;
// 	cls;
// }

class Student
{
public:
  string name;
  int roll;
  char section;
  int math_marks;
  int cls;

  Student(string name, int role, char section, int math_marks, int cls)
  {
    this->name = name;
    this->roll = role;
    this->section = section;
    this->math_marks = math_marks;
    this->cls = cls;
  }
};

int main()
{

  Student alamin("alamin", 1, 'A', 90, 12);
  Student tutul("tutul", 2, 'A', 95, 12);
  Student sumon("sumon", 3, 'A', 97, 12);

  if (alamin.math_marks > tutul.math_marks && alamin.math_marks > sumon.math_marks)
  {
    cout << alamin.name << endl;
  }
  else if (tutul.math_marks > alamin.math_marks && tutul.math_marks > sumon.math_marks)
  {
    cout << tutul.name << endl;
  }
  else if (sumon.math_marks > alamin.math_marks && sumon.math_marks > tutul.math_marks)
  {
    cout << sumon.name << endl;
  }

  // cout << alamin.name << endl;

  return 0;
}
