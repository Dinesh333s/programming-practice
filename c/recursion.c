//factorial
#include<stdio.h>
int fact(int n);
int main()
{
  int n,res;
  scanf("%d",&n);
  res=fact(n);
  printf("%d",res);
}
int fact(int n)
{
  int res;
  if(n==1)
  {
    res=1;
  }
  else
  {
    res=n*fact(n-1);
  }
  return res;
}
