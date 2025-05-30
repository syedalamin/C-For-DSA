#include <bits/stdc++.h>
using namespace std;
int n;
int *sort_fun()
{

  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr+n);

  return arr;
}

int main()
{

  int *fun_array = sort_fun();

  for (int i = 0; i < n; i++)
  {
    cout << fun_array[i] << " ";
  }
  cout << endl;
  // delete[] fun_array;

  // for (int i = 0; i < n; i++)
  // {
  //   cout << fun_array[i] << " ";
  // }
  cout << endl;
  return 0;
}
