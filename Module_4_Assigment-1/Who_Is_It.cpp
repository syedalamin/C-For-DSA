#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int ID;
  string Name;
  char Section;
  int Total_Marks;
};

int main()
{
  int t;
  cin >> t;

  while (t--)
  {

    Student topper;
    for (int i = 1; i <= 3; i++)
    {
      Student s;
      cin >> s.ID >> s.Name >> s.Section >> s.Total_Marks;

      if (i == 1)
      {
        topper = s;
      }
      else
      {
        if (s.Total_Marks > topper.Total_Marks)
        {
          topper = s;
        }
        else if (s.Total_Marks == topper.Total_Marks)
        {
          if (s.ID < topper.ID)
          {
            topper = s;
          }
        }
      }
    }

    cout << topper.ID << " " << topper.Name << " " << topper.Section << " " << topper.Total_Marks << endl;
  }

  return 0;
}
