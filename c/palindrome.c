#include<stdio.h>

int main()
{
int n,sum=0,temp,r;
scanf("%d",&n);
temp=n;
while(n>0)
{
  r=n%10;
  sum=sum*10+r;
  n=n/10;
}
n=temp;
if(sum==n)
{
  printf("palindrome" );
}
else
{
printf("Not palindrome");
}
}
