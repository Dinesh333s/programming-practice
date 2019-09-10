
#include<stdio.h>
int main()
{
 int limit,n,r,fact,i,temp,sum=0;
 printf("Enter limit");
 scanf("%d",&limit);
 for(n=1;n<=limit;n++)
 {
 temp=n;
 sum=0;

  while(n>0)
  {
   r=n%10;
fact=1;
   for(i=r;i>=1;i--)
   {
    fact=fact*i;
   }
   sum=sum+fact;
   n=n/10;

  }
  n=temp;
  if(sum==n)
  {
  printf(" %d is strong no  \n",n);
  }
 }
 return 0;
}
