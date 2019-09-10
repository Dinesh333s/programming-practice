#include<stdio.h>
int n;
int fibbon(int a,int b);
int  main()
{
  static int a=0,b=1;
  scanf("%d",&n);
printf("1 ");
  fibbon(a,b);
  printf("\n\n");
}
int fibbon(int a,int b)
{
  static int i=1;
  int c;
  if(i==n)
  {
    return 0;
  }
  else
  {

    c=a+b;
    a=b;
    b=c;
    printf(" %d ",c);
    i++;
    fibbon(a,b);

  }
return 0;
}
