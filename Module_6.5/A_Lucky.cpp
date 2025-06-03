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

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
      leftSum += (s[i] - '0');
      rightSum += (s[j] - '0');
    }

    if (leftSum == rightSum)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }

    // cout << leftSum << " " << rightSum << endl;
  }

  return 0;
}
