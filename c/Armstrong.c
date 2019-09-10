#include<stdio.h>
int main()
{
  int n,n1,temp,sum=0,r;
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
  
    r=n%10;
    n1=r*r*r;
    sum=sum+n1;
    n=n/10;

  }
  n=temp;
  if(sum==n)
  {
    printf("ARMSTRONG");
  }
  else
  {
    printf("NOT ARMSTRONG");
  }
}
