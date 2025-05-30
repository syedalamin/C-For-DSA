#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, s;
    cin >> n >> s;
    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    sort(a, a + n);

    int found = 0;

    for (int i = 0; i < n - 2; i++)
    {
      int left = i + 1;
      int right = n - 1;
      while (left < right)
      {
        int sum = a[i] + a[left] + a[right];

        if (sum == s)
        {
          found = 1;
          break;
        }
        else if (sum < s)
        {
          left++;
        }
        else
        {
          right--;
        }
      }
      if (found)
      {
        break;
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
  }

  return 0;
}
