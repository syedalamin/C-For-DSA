#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  char s;
  char q;

  cin >> a >> s >> b >> q >> c;

  if (s == '+')
  {
    int sum = a + b;
    if (sum == c)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << sum << endl;
    }
  }
  else if (s == '-')
  {
    int sum = a - b;
    if (sum == c)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << sum << endl;
    }
  }
  else if (s == '*')
  {
    int sum = a * b;
    if (sum == c)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << sum << endl;
    }
  }

  return 0;
}
