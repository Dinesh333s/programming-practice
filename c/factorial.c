#include<stdio.h>

int factorial(int n)
{
  if(n==0 || n==1) return 1;
  return n * factorial(n-1);
}

int main()
{
  int n = 5;
  printf("%d", factorial(5));
  return 0;
}
