#include <stdio.h>
int sumof(int n);
int main()
{
  int n, sum;
  scanf("%d", &n);
  sum = sumof(n);
  printf("%d", sum);
}

int sumof(int n)
{
  static int sum = 0;
  int r;
  if (n > 0)
  {
    r = n % 10;    //51 --->1 then 5
    sum = sum + r; //0+1=1 then 1+5=6
    n = n / 10;    //5
    sumof(n);
  }
  return sum;
}
