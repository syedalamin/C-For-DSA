#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    char c;

    cin >> n >> c;
    string s(n, c);

    for (char ch : s)
    {
      cout << ch << " ";
    }
    cout << endl; 
  }
  return 0;
}

// string ss(5, 'A');

// cout << ss << endl;