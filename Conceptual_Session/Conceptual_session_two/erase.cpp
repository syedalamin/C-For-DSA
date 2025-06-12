#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1;
  cin >> s1;

  s1.insert(2, "a");
  cout << s1 << endl;

  // s1.erase(2, 1); // delate string value of position
  // cout << *(s1.begin()+2);
  return 0;
}
