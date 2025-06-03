#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    int equal = 0;
    int notEqual = 0;

    for (int i = 0; i < s.size(); i++)
    {
      s[i] = toupper(s[i]);
    }

    if (s == "YES")
    {
      equal += 1;
    }
    else
    {
      notEqual += 1;
    }

    if (equal == 1)
    {
      cout << "YES" << endl;
    }
    else if (notEqual == 1)
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
