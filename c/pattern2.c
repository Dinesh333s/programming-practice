 #include<stdio.h>
int main()
{
  int i,j;

  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf(" %d ",i);
    }
    printf("\n");
  }
}
/*for(i=5;i>=1;i--)
{
  for(j=i;j<=5;j++)
  {
    //printf(" * ");
printf(" %d ",j);
  }
  printf("\n");
}
}*/
