#include<stdio.h>
#include<limits.h>
int main()
{
  int a[100],n,large,slarge,small,ssmall;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  large=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(a[i]>large)
    {
      slarge=large;
      large=a[i];

    }
    else if(a[i]<large&&slarge>a[i])
    slarge=a[i];
  }
  printf("%d %d",large,slarge);
}
