#include<stdio.h>
struct emp
{
  int rollno;
  char name[20];
  float mark;
};
int main()
{
  struct emp e={117,"DIINESH",333};
  printf("Details are:");
  printf("ROLLNO:%d\nNAME:%s\nMARK:%.f\n",e.rollno,e.name,e.mark);
}
