#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;

  while (n--)
  {
    cin >> s;

    if (s.length() > 10)
    {
      cout << s.front() << s.length() - 2 << s.back() << endl;
    }
    else
    {
      cout << s << endl;
    }
  }

  return 0;
}
