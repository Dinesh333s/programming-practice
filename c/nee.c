#include<stdio.h>
#include<string.h>
int main()
{
char s1;
int i,j;
scanf("%c",&s1);
if(s1>='A'&& s1<='Z' || s1>='a' && s1<='z')
    {
      printf("u enter char");
    }
    else
    {
      printf("u enter number");
    }
}
