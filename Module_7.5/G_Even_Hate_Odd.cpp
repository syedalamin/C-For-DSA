#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);

    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] % 2 == 0)
      {
        even++;
      }
      else
      {
        odd++;
      }
    }

    if (n % 2 != 0)
    {
      cout << "-1" << endl;
    }
    else
    {

      int result = abs(even - odd) / 2;
      cout << result << endl;
    }
  }

  return 0;
}
