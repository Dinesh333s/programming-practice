#include<stdio.h>
int main()
{
int a[],n,sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("%d\n",sum );
}
