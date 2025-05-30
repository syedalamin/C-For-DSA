#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 10;

  int *ptr = &a;

  cout << "address" << " " << &a << endl;

  *ptr = 20; // dereferencing

  cout << "Pointer storage address" << " " << ptr << endl;
  cout << "Pointer storage value" << " " << *ptr;

  return 0;
}
