#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
switch(a)
{
case 1:
{
  printf("\nSunday");
  break;
}
case 2:
{
  printf("\nmonday");
  break;
}
case 3:
{
  printf("\ntuesday");
  break;
}
case 4:
{
  printf("\nwednesday");
  break;
}
case 5:
{
  printf("\nthrusday");
  break;
}
case 6:
{
  printf("\nfriday");
  break;
}
case 7:
{
  printf("\nsaturday");
  break;
}
default:
{
printf("\nNOT VALID");
break;
}
}
return 0;
}
