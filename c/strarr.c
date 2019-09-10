#include<stdio.h>
struct emp
{
int eno;
char ename[20];
float esal[4];
};
int main()
{
struct emp a[3];
for(int i=0;i<3;i++)
{
   scanf("%d %s",&a[i].eno,&a[i].ename);
   for(int j=0;j<4;j++)
   {
      scanf("%f",&a[j].esal[j]);
   }
}
 for(int i=0;i<3;i++)
{
    printf("%d %s",a[i].eno,a[i].ename);
    for(int j=0;j<4;j++)
    {
      printf("%f",a[j].esal[j]);
    }
}
}
