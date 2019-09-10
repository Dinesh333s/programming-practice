//call BY Value
#include<stdio.h>
void swap(int *,int *);
int main()
{
  int a=10,b=20;
  /*printf("Before swap:\na=%d\nb=%d",a,b);//a=10 b=20
  swap(a,b);
  printf("\nAfter swap:\na=%d\nb=%d\n",a,b);// a=10 b=20
}
void swap(int a,int b)
{
int temp=a;
a=b;
b=temp;
printf("\nAfter swap:\na=%d\nb=%d\n",a,b);//a=20 b=10
}*/


//to avoid problem to introduce CALL BY REFERENCE

printf("Before swap:\na=%d\nb=%d",a,b);
swap(&a,&b);
printf("\nAfter swap:\na=%d\nb=%d\n",a,b);

}
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
