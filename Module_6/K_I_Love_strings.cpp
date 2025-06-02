#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  string s, t;

  while (n--)
  {
    cin >> s >> t;
    int p = 0, q = 0;
    string result = "";

    while (p < s.length() && q < t.length())
    {
      result += s[p];
      result += t[q];
      p++;
      q++;
    }
    while (p < s.length())
    {
      result += s[p];
      p++;
    }
    while (q < t.length())
    {
      result += t[q];
      q++;
    }

    cout << result << endl;
  }

  return 0;
}
