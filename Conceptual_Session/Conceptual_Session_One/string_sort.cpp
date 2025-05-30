#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  getline(cin, str); // get with address

  // int freq[26] = {0};
  // for (int i = 0; i < str.length(); i++)
  // {
  //   // cout << str[i];

  //   freq[str[i] - 'a']++;
  // }
  // for (int i = 0; i < 26; i++)
  // {
  //   // cout << freq[i + 'a'] << endl;
  //   if (freq[i] > 0)
  //   {
  //     for (int j = 0; j < freq[i]; j++)
  //     {

  //       cout << (char)(i + 'a');
  //     }
  //   }
  // }

  sort(str.begin(), str.end());

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] != ' ')
    {
      cout << str[i];
    }
  }

  return 0;
}
