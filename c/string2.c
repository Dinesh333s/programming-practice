//find str len without using string.h header file
#include<stdio.h>
int strlenn(char x[]);
int main()
{
char str[100],len,count;
printf("ENTER NAME:\n");
scanf(" %[^\n]", str);
count=strlenn(str);
printf("%d\n",count);
// printf("File :%s\n", __FILE__ );
// printf("Date :%s\n", __DATE__ );
// printf("Time :%s\n", __TIME__ );
// printf("Line :%d\n", __LINE__ );
// printf("STDC :%d\n", __STDC__ );
}
int strlenn(char x[])
{
int i=0,count=0;
while(x[i]!='\0')
{
count++;
i++;
}
return count;
}
