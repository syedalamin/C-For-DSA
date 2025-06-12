#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);

  stringstream ss(s);

  string word;

  int found = 0;

  while (ss >> word)
  {

    if (word == "Jessica")
    {
      found = 1;
      break;
    }
    else
    {
      found = 0;
    }
  }

  if (found == 1)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
