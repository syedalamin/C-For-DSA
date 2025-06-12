#include <stdio.h>

int main()
{
  int n, m;

  scanf("%d %d", &n, &m);

  if (n != m)
  {
    printf("NO\n");
    return 0;
  }

  int matrix[100][100];
  int Jadu_Matrix = 1;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {

      scanf("%d", &matrix[i][j]);

      if ((i == j) || (i + j == n - 1))
      {
        if (matrix[i][j] != 1)
        {
          Jadu_Matrix = 0;
        }
      }
      else
      {
        if (matrix[i][j] != 0)
        {
          Jadu_Matrix = 0;
        }
      }
    }
  }

  if (Jadu_Matrix)
  {
    printf("YES");
  }
  else
  {

    printf("NO");
  }
  return 0;
}