#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a>b) && (a>c))
{
printf("a is big:%d",a);
}
if((b>c)&& (b>a))
{
printf("b is big:%d",b);
}
if((c>a)&&(c>b))
{
printf("c is big:%d",c);
}
}
