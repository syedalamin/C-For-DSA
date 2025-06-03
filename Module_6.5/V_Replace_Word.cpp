#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  string result = "";

  for (int i = 0; i < s.length(); i++)
  {
    if (s.substr(i, 5) == "EGYPT")
    {
      result += " ";
      i += 4;
    }
    else
    {
      result += s[i];
    }
  }
  cout << result << endl;

  return 0;
}
