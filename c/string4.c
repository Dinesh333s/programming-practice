//upper case to lower case
#include<stdio.h>
#include<string.h>
int main()
{/*
char str[20];
gets(str);
strlwr(str);
printf("%s",str);
}*/
char str[20],i;
scanf(" %[^\n]",str);
i=0;
while(str[i]!='\0')
{
  if(str[i]>='a'&& str[i]<='z')
  {
    str[i]=str[i]+32;
  }
  i++;
}
printf("%s",str);
}
