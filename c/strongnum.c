#include<stdio.h>
int main()
{
  int n,temp,fact,r,sum=0;
  scanf("%d",&n);
  temp=n;
 while(n>0)
{
  r=n%10;
  fact=1;
  for(int i=r;i>=1;i--)
  {
    fact=fact*i;
  }

  sum=sum+fact;
  n=n/10;
}
n=temp;
if(sum==n)
printf("%d STRONG\n",n);
else
  printf("NOT STRONG");

}
