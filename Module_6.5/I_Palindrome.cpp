#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int palindrome = 1;

  for (int i = 0, j = s.length() - 1; i < j; i++, j--)
  {
    if (s[i] != s[j])
    {
      palindrome = 0;
      break;
    }
  }

  if (palindrome == 1)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
