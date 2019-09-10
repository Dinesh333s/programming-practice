#include<stdio.h>
int main()
{
FILE *fp;
fp = fopen("/home/dinesh/Desktop/my1.txt","w");
if(fp==NULL)
{
  printf("file not open\n");
}
else
{
printf("file open in read mode");
}
}
