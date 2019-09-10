#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
unsigned int l1,l2;
scanf("%s",a);
scanf("%s",b);
l1=strlen(a);
l2=strlen(b);
for(int i=0;i<=l2;i++)
{
a[l1+i]=b[i];
}
printf("%s",a);
}
