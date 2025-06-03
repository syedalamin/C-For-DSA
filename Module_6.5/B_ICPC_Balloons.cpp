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

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
      s[i] = toupper(s[i]);
    }

    set<char> firstSolved;
    int balloons = 0;

    for (char c : s)
    {
      if (firstSolved.count(c) == 0)
      {
        balloons += 2;
        firstSolved.insert(c);
      }
      else
      {
        balloons += 1;
      }
    }

    cout << balloons << endl;
  }
  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;

//   while (t--)
//   {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     int freq[26] = {0};
//     for (int i = 0; i < n; i++)
//     {
//       s[i] = toupper(s[i]);
//     }

//     for (char c : s)
//     {
//       freq[c - 'A']++;
//     }
//     int balloons = 0;
//     for (int i = 0; i < 26; i++)
//     {

//       if (freq[i] > 0)
//       {
//         balloons += freq[i] + 1;
//       }

//     }

//     cout << balloons << endl;
//   }
//   return 0;
// }
