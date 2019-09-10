#include<stdio.h>
#include<string.h>
int main()
{
/*char name[20];
scanf("%s",name);
printf("HI IM %s",name);
}*/



//finding string length
char str[100];
unsigned int len;
printf("ENTER NAME: ");
gets(str);
len=strlen(str);
printf("MY NAME IS :'%s'\n length IS :'%d'",str,len);
}
