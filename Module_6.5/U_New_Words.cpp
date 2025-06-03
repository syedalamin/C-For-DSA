#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    s[i] = toupper(s[i]);
  }

  int freq[26] = {0};

  for (char c : s)
  {
    freq[c - 'A']++;
  }
  // EGYPT
  int E = freq['E' - 'A'];
  int G = freq['G' - 'A'];
  int Y = freq['Y' - 'A'];
  int P = freq['P' - 'A'];
  int T = freq['T' - 'A'];

  int result = min({E, G, Y, P, T});
  // cout << E << endl;
  // cout << G << endl;
  // cout << Y << endl;
  // cout << P << endl;
  // cout << T << endl;

  cout << result << endl;
  return 0;
}
