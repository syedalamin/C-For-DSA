#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  

  int A = 0;
  int D = 0;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'A')
    {
      A += 1;
    }
    else if (s[i] == 'D')
    {
      D += 1;
    }
  }

  if (A > D)
  {
    cout << "Anton" << endl;
  }
  else if (A < D)
  {
    cout << "Danik" << endl;
  }
  else if (A == D)
  {
    cout << "Friendship" << endl;
  }

  return 0;
}
