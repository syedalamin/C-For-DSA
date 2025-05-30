#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[4] = {10, 20, 30, 40};

  cout << &arr[0] << endl; // array address of array index address 

  cout << arr << endl; // array address of name 

  for(int i = 0; i<4 ; i++){
    cout << &arr[i] << " ";
  }

  return 0;
}
 