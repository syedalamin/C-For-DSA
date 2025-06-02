#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  int math;
  int english;
  Student(string name, int roll, int math, int english)
  {
    this->name = name;
    this->roll = roll;
    this->math = math;
    this->english = english;
  }
  
  void total(){
      cout << "Total Marks of "<< name << " = " << math + english << endl;
  } 
};

main()
{
  Student alamin("Syed Alamin", 23, 85, 82);
  alamin.total();

  Student tutul("Syed Tutul", 34, 74, 64);
  tutul.total();

  // cout << alamin.name << " " << alamin.roll << endl;

  return 0;
}
