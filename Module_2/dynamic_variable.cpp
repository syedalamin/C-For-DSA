#include <bits/stdc++.h>
using namespace std;

int *p;

int fun()
{
  int *x = new int;
  *x = 10;

  p = x;

  cout << "fun -->" << *p << endl;

  return x;
}

int main()
{

  int y = fun();

  int *a = new int;
  delete a;

  cout << "Main --> " << *p << endl;

  return 0;
}