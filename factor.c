#include <stdio.h>
void main()
{
  system("clear");
  int n;
  printf("Check factor number : ");
  scanf("%d", &n);

  printf("factors");
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
      printf(" %d ", i);
  }
}