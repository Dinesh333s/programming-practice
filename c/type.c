#include<stdio.h>
int main()
{
typedef int array[5];
array x={10,20,30,40,50};
printf("the array are:\n");
for(int i=0;i<5;i++)
{
  printf("array:%d\n",x[i]);
}
}
